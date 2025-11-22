#include <iostream>
#include "User.h"
#include "GuestUser.h"

using namespace std;

Guestuser::GuestUser() {}

void GuestUser::Register(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact) {
	userID = id;
	username = uname;
};

void GuestUser::displayGuestUser() {
	cout << "User ID : " << userID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
}

GuestUser::~GuestUser() {};