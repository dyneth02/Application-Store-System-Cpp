#include <iostream>
#include "User.h"

using namespace std;

class Employee : protected User {
	protected:
		string username;
		
	public:
		Employee();
		Employee(string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact);
		~Employee();
};