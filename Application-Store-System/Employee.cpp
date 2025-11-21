#include <iostream>
#include "User.h"
#include "Employee.h"

using namespace std;

Employee::Employee() {}

Employee::Employee(string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact) {
	username = uname;
}

Employee::~Employee() {}