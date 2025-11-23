#include <iostream>
#include "User.h"

User::User() {};

User::User(string fname, string lname, string pwd, string mail, string contact) {
	firstName = fname;
	lastName = lname;
	password = pwd;
	email = mail;
	contactNumber = contact;
}

void User::login(string mail, string pwd) {}

User::~User() {}