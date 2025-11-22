#include <iostream>
#include "User.h"

using namespace std;

class GuestUser : protected User {
	private:
		int userID;
		string username;
		
	public:
		GuestUser();
		void Register(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact);
		void displayGuestUser();
		~GuestUser();
};