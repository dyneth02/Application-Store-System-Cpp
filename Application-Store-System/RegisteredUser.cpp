#include <iostream>
#include "User.h"
#include "FeedBack.h"
#include "Review.h"
#include "Inquiry.h"
#include "App.h"
#include "RegisteredUser.h"

using namespace std;

RegisteredUser::RegisteredUser() {
	fb = new Feedback(0, 0, "Not set", "Not set");
	rw = new Review(0, 0, 0, "Not set", "Not set");
    inq = new Inquiry(0, 0, "Not set", "Not set");
}

RegisteredUser::RegisteredUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;
} 

RegisteredUser::RegisteredUser(RegisteredUser *ru, int fid, string ftitle, string fdate) {
	fb = new FeedBack(fid, id, ftitle, fdate);
} 

RegisteredUser::RegisteredUser(RegisteredUser *ru, int rid, string rtitle, string rdate) {
	rw = new Review(rid, id, rtitle, rdate);
}

RegisteredUser::RegisteredUser(RegisteredUser *ru, int inqid, string inqtitle, string inqdate) {
	inq = new Inquiry(inqid, id, inqtitle, inqdate);
}

void RegisteredUser::changeInfo() {}

void RegisteredUser::displayRegisteredUser() {
	cout << "User ID : " << userID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
}

void RegisteredUser::displayUserFeedback() {
	fb->displayFeedBack();
}

void RegisteredUser::displayUserReview() {
    rw->displayReview();
}

void RegisteredUser::displayUserInquiry() {
	inq->displayInquiry();
}

void RegisteredUser::addToDownloads(App *app1, App *app2) {
	app[0] = app1;
	app[1] = app2;
}

void viewFAQ(FAQ *faq) {
	faq->displayFAQ();
}

void RegisteredUser::displayDownloadedApps() {
	app[0]->displayApp();
	app[1]->displayApp();
}

RegisteredUser::~RegisteredUser() {
	delete fb;
	delete rw;
	delete inq;
}