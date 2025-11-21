#include <iostream>
#include "Employee.h"
#include "RegsiteredUser.h"
#include "App.h"
#include "Feedback.h"
#include "Review.h"
#include "Inquiry.h"
#include "FAQ.h"

class Employee;
class RegsiteredUser;
class App;
class Feedback;
class Review;
class Inquiry;
class FAQ;

using namespace std;

Admin::Admin() {};

Admin::Admin(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact) {
    adminID = id;
}

void Admin::addUsers(int id, string uname, string fname, string lname, string pwd, string mail, string contact) {
    RegisteredUser *newRUrser = new RegisteredUser(id,uname,fname,laname,pwd,mail,contact);
}

void Admin::removeUsers() {};

void Admin::modifyUsers() {};

void Admin::approveFeedback(FeedBack *feed) {
    fb = feed;
    // necessary codes for granting approval
};

void Admin::approveInquiry(Inquiry *inquiry) {
    inq = inquiry;
    // necessary codes for granting approval
};

void Admin::approveReview(Review *rev) {
    rw = rev;
    // necessary codes for granting approval
};

void Admin::approveApp(App *thisApp) {
    app = thisApp;
    // necessary codes for granting approval
};

FAQ Admin::addFAQ(int faqid, string faqname, string faqdate) {
    FAQ *newFAQ = new FAQ(faqid, faqname, faqdate);
    return newFAQ;
};

void Admin::displayAdmin() {
    cout << "Employee ID : " << empID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
};