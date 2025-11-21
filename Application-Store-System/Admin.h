#include <iostream>
#include "Employee.h"
#include "RegsiteredUser.h"
#include "App.h"
#include "Feedback.h"
#include "Review.h"
#include "Inquiry.h"
#include "FAQ.h"

class Employee;
class RegsiteredUser;
class App;
class Feedback;
class Review;
class Inquiry;
class FAQ;

using namespace std;

class Admin : protected Employee{
	private:
		int adminID;
		App *app = null;
        FeedBack *fb = null;
        Review *rw = null;
        Inquiry *inq = null;
		
	public:
		Admin();

		Admin(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : Employee (uname, fname, lname, pwd, mail, contact);

		void addUsers(int id, string uname, string fname, string lname, string pwd, string mail, string contact);
		void removeUsers();
		void modifyUsers();

        void approveFeedback(FeedBack *feed);
        void approveInquiry(Inquiry *inquiry);
        void approveReview(Review *rev);
        void approveApp(App *thisApp);

        FAQ addFAQ(int faqid, string faqname, string faqdate);

		void displayAdmin();
		
		~Admin();
};