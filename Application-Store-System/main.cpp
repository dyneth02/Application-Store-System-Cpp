#include <iostream>
#include "User.h"
#include "Employee.h"
#include "GuestUser.h"
#include "RegisteredUser.h"
#include "App.h"
#include "FeedBack.h"
#include "Review.h"
#include "Inquiry.h"
#include "FAQ.h"
#include "Developer.h"

using namespace std;

class User;
class Employee;
class GuestUser;
class RegisteredUser;
class FeedBack;
class Review;
class FAQ;
class Developer;

int main(void) {

    GuestUser *sandesh = new GuestUser();
    sandesh->Register(1, "sandesh2002", "Sandesh", "Dewthilina", "SandeshABCD1234", "sandesh@app.com", "0701432576");

    App *newApp = new App(1, "Hulu", "Video Streaming", 100000);

    Developer *kaveesha = new Developer(newApp, 1, "kaveesha2002", "Kaveesha", "Perera", "KaveeABCD1234", "kavee@app.com", "0729856653");

    Admin *yeshani = new Admin(1, "yesh2002", "Yeshani", "Cooray", "YeshABCD1234", "yesh@app.com", "0789562378");

    RegisteredUser *thiwanka1 = new RegisteredUser(1, "thiwa2002", "thiwanka", "Perera", "ThiwaABCD1234", "thiwa@app.com", "0719066431");

    thiwanka->login("thiwa@app.com", "ThiwaABCD1234");

    RegisteredUser *thiwanka2 = new RegisteredUser(thiwanka1, 1, 1, "This is a good site", "2024-10-18");

    RegisteredUser *thiwanka3 = new RegisteredUser(thiwanka1, 1, 1, 1, "This is a good app", "2024-12-09");

    RegisteredUser *thiwanka4 = new RegisteredUser(thiwanka1, 1, 1, "How do I get refund ?", "2024-02-01");

    thiwanka2->displayUserFeedback();

    thiwanka3->displayUserReview();

    thiwanka4->displayUserInquiry();

    FAQ *thisFAQ = yeshani->addFAQ(1, "How to fast navigate", "2023-09-08");

    thisFAQ->displayFAQ();

    RegisteredUserUser->displayRegisteredUser();
    Admin->displayAdmin();
    Developer->displayDeveloper();

    delete sandesh;
    delete thiwanka;
    delete thiwanka1;
    delete thiwanka2;
    delete thiwanka3;
    delete thiwanka4;
    delete kaveesha;
    delete yeshani;
    delete newApp;

    return 0;
}