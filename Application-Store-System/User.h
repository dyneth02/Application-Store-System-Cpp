#include <iostream>
using namespace std;

class User {
	protected:
		string firstName;
		string lastName;
		string password;
		string email;
		string contactNumber;
		
	public:
		User();
		User(string fname, string lname, string pwd, string mail, string contact);
		void login(string mail, string pwd);
		~User();
};