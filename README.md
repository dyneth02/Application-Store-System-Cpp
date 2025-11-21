# 🧩 App Feedback & FAQ Management System – C++ OOP

This codebase is a **C++ Object-Oriented Programming** mini–project built for the **Object Oriented Concepts (IT1050)** module at **SLIIT (Year 1, Semester 2)**.  
It models a small platform where users interact with an app, leave feedback, reviews and inquiries, while employees (admin/developer) manage content and FAQs.

---

## 🎯 Project Overview

The system focuses on:

- Basic **user management** (guest and registered users).
- Representing an **App** with download statistics.
- Handling **feedback**, **reviews**, **inquiries**, and **FAQs** as separate domain objects.
- Showing how **Admin** and **Developer** roles extend the core `Employee` and `User` abstractions.
- Demonstrating **inheritance, composition, and object collaboration** in C++.

All behaviour is illustrated via **console output** in `main.cpp`, where objects are created, linked together, and their display functions are called.

---

## 🧱 Main Classes & Responsibilities

### 1. `User`
Base class for all user-like entities.

- Attributes: `firstName`, `lastName`, `password`, `email`, `contactNumber`.
- Methods:
  - `login(string mail, string pwd)` – placeholder for authentication logic.
- Serves as the superclass of `Employee` and indirectly of other user roles.

---

### 2. `Employee`
Intermediate base class for staff roles.

- Inherits (protected) from `User`.
- Adds:
  - `username`
- Constructors:
  - Default constructor.
  - Parameterized constructor passing common data to `User`.
- Extended by:
  - `Admin`
  - `Developer`

---

### 3. `Admin`
Represents an administrative employee with management privileges.

- Inherits from `Employee`.
- Attributes:
  - `adminID`
  - Pointers to `App`, `FeedBack`, `Review`, `Inquiry`, and `FAQ` (for approvals).
- Key methods:
  - `addUsers(...)` – (conceptual) create new registered users.
  - `removeUsers()`, `modifyUsers()` – placeholders for user management.
  - `approveFeedback(FeedBack *feed)`
  - `approveInquiry(Inquiry *inquiry)`
  - `approveReview(Review *rev)`
  - `approveApp(App *thisApp)`
  - `addFAQ(int faqid, string faqname, string faqdate)` – creates a new `FAQ`.
  - `displayAdmin()` – prints admin details.

---

### 4. `Developer`
Represents a developer responsible for the application.

- Inherits from `Employee`.
- Attributes:
  - `devID`
  - `App *app` – associated application.
- Key methods:
  - `removeApps()` – placeholder for removing apps.
  - `modifyApps()` – placeholder for updating app details.
  - `reactToReview()` – conceptual reaction to user reviews.
  - `displayDeveloper()` – prints developer details.

---

### 5. `App`
Models an application available to users.

- Attributes:
  - `appID`
  - `appName`
  - `appDescription`
  - `downloads`
  - `RegisteredUser *ru[2]` – small fixed array of users who downloaded.
- Methods:
  - `downloadedUsers(RegisteredUser *ru1, RegisteredUser *ru2)` – attach users and increase download count.
  - `displayApp()` – prints app information to the console.

---

### 6. `GuestUser`
Represents a visitor who has not yet fully registered.

- Inherits (protected) from `User`.
- Attributes:
  - `userID`
  - `username`
- Methods:
  - `Register(...)` – registers the guest as a user, initializing inherited `User` fields.
  - `displayGuestUser()` – prints guest user details.

---

### 7. `RegisteredUser`
Represents a fully registered user in the system.

- Inherits (protected) from `User`.
- Attributes:
  - `userID`
  - `username`
  - Array of `App *app[2]` – downloaded apps.
  - Pointers to:
    - `FeedBack *fb`
    - `Review *rw`
    - `Inquiry *inq`
- Constructors:
  - Default constructor – initializes associated objects with default values.
  - Parameterized constructor – basic user registration.
  - Overloaded constructors:
    - To create feedback linked to a `RegisteredUser`.
    - To create review linked to a `RegisteredUser`.
    - To create inquiry linked to a `RegisteredUser`.
- Methods:
  - `changeInfo()` – placeholder for updating profile details.
  - `displayRegisteredUser()` – prints user data.
  - `displayUserFeedback()` / `displayUserReview()` / `displayUserInquiry()` – delegate to the respective objects.
  - `addToDownloads(App *app1, App *app2)` – attach apps to the user.
  - `displayDownloadedApps()` – show app details.
  - `viewFAQ(FAQ *faq)` – view FAQ details.
  - Destructor releases owned feedback/review/inquiry objects.

---

### 8. `FeedBack`, `Review`, and `Inquiry`

These classes encapsulate different user interactions with the system.

#### `FeedBack`
- Attributes: `feedbackID`, `userID`, `feedbackName`, `feedbackDate`.
- Methods:
  - Constructor to initialize fields.
  - `displayFeedBack()` – prints feedback details.

#### `Review`
- Attributes: `reviewID`, `userID`, `appID`, `reviewName`, `reviewDate`.
- Methods:
  - Constructor to initialize fields.
  - `displayReview()` – prints review details.

#### `Inquiry`
- Attributes: `inquiryID`, `userID`, `inquiryName`, `inquiryDate`.
- Methods:
  - Constructor to initialize fields.
  - `displayInquiry()` – prints inquiry details.

---

### 9. `FAQ`
Represents frequently asked questions.

- Attributes:
  - `faqID`
  - `faqName`
  - `faqDate`
- Methods:
  - Constructor to set ID, title and date.
  - `displayFAQ()` – prints FAQ details.

---

## ▶️ `main.cpp` – How the Scenario Runs

The `main.cpp` file demonstrates how all the components collaborate:

1. A `GuestUser` is created and registered.  
2. An `App` instance is created (e.g., “Hulu” with description and downloads).  
3. A `Developer` is associated with the app.  
4. An `Admin` is instantiated for management.  
5. A `RegisteredUser` logs in and then:
   - creates feedback,  
   - creates a review,  
   - submits an inquiry.  
6. The respective display functions are invoked to show:
   - user details,  
   - feedback, review, inquiry,  
   - FAQ created by the Admin.

This gives a compact **end-to-end interaction flow** of the system.

---

## 🧠 Concepts Demonstrated

- **Encapsulation** – data is kept private with public methods for interaction.  
- **Inheritance** – `Employee`, `GuestUser`, and `RegisteredUser` derive from `User`; `Admin` and `Developer` derive from `Employee`.  
- **Polymorphism (in design)** – class hierarchy is structured for extension (can be extended with virtual functions).  
- **Composition / Aggregation** – classes like `RegisteredUser` and `Admin` hold pointers to `FAQ`, `App`, `FeedBack`, `Review`, and `Inquiry`.  
- **Constructors & Destructors** – used to initialize and clean up dynamically allocated objects.

---

## 🛠️ Build & Run

> You can use any modern C++ compiler (g++, clang++, MSVC, or Code::Blocks/Dev-C++ on Windows).

### 1️⃣ Clone the repository
```bash
git clone https://github.com/<your-username>/AppFeedbackFAQ-System-Cpp.git
cd AppFeedbackFAQ-System-Cpp


AppFeedbackFAQ-System-Cpp/
├─ User.h / User.cpp
├─ Employee.h / Employee.cpp
├─ GuestUser.h / GuestUser.cpp
├─ RegisteredUser.h / RegisteredUser.cpp
├─ Admin.h / Admin.cpp
├─ Developer.h / Developer.cpp
├─ App.h / App.cpp
├─ FAQ.h / FAQ.cpp
├─ FeedBack.h / FeedBack.cpp
├─ Review.h / Review.cpp
├─ Inquiry.h / Inquiry.cpp
├─ main.cpp
└─ README.md


🏫 Academic Context
Institution: Sri Lanka Institute of Information Technology (SLIIT)
Module: IT1050 – Object Oriented Concepts
Year: Year 1, Semester 2
Assignment Theme: App / feedback & FAQ management using C++ OOP

👨‍💻 Author(s)
Name: Your Name
Reg. No: IT23183018
Role: C++ OOP Design & Implementation
