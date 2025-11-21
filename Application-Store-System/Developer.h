#include <iostream>
#include "Employee.h"
#include "App.h"

class Employee;
class App;

using namespace std;

class Developer : protected Employee{
	private:
		int devID;
		App *app = null;
		
	public:
		Developer();

		Developer(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (fname, lname, pwd, mail, contact);

		Developer(App *app, int aid, string aname, string ades, double dwlds) : User (fname, lname, pwd, mail, contact) : Employee (fname, lname, pwd, mail, contact);

		void removeApps();

        void modifyApps();

        void reactToReview();

		void displayDeveloper();
		
		~Developer();
};