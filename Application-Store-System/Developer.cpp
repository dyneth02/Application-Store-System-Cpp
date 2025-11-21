#include <iostream>
#include "Employee.h"
#include "App.h"
#include "Developer.h"

class Employee;
class App;

using namespace std;

Developer::Developer() {};

Developer::Developer(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact) {
    devID = id;
}

Developer::Developer(App *app, int id, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact) {
	this.app = app;
    devID = id;
}

void Developer::removeApps() {};

void Developer::modifyApps() {};

void Developer::reactToReview() {};

void Developer::displayDeveloper() {
    cout << "Employee ID : " << empID << endl;
	cout << "Username : " << username << endl;
	cout << "First Name : " << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	cout << "Email : " << email << endl;
	cout << "Password : **************" << endl;
	cout << "Contact Number : " << contactNumber << endl;
};

Developer::~Developer() {};