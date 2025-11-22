#include <iostream>
#include "User.h"
#include "FeedBack.h"
#include "Review.h"
#include "Inquiry.h"
#include "App.h"

class FeedBack;
class Review;
class Inquiry;
class App;

using namespace std;

class RegisteredUser : protected User{
	private:
		int userID;
		string username;
		App *app[2];

		FeedBack* fb = null;
		Review* rw = null;
		Inquiry* inq = null;
		
	public:
		RegisteredUser();

		RegisteredUser(int id, string uname, string fname, string lname, string pwd, string mail, string contact) : User (fname, lname, pwd, mail, contact);

		RegisteredUser(RegisteredUser *ru, int fid, string ftitle, string fdate);

		RegisteredUser(RegisteredUser *ru, , int rid, string rname, string rdate);

		RegisteredUser(RegisteredUser *ru, , int inqid, string inqname, string inqdate);

		void changeInfo();

		void displayFreePlanUser();

        void displayUserFeedback();

        void displayUserReview();

        void displayUserInquiry();

		void viewFAQ(FAQ *faq);

		void RegisteredUser::addToDownloads(App *app1, App *app2);

		void displayRegisteredUser() {
			cout << "User ID : " << userID << endl;
			cout << "Username : " << username << endl;
			cout << "First Name : " << firstName << endl;
			cout << "Last Name : " << lastName << endl;
			cout << "Email : " << email << endl;
			cout << "Password : **************" << endl;
			cout << "Contact Number : " << contactNumber << endl;
		};
		
		~RegisteredUser();
};