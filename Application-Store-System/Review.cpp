#include <iostream>
#include "Review.h"
#include "RegisteredUser.h"
#include "App.h"

using namespace std;

Review::Review();

Review::Review(int rid, int uid, int aid, string rname, string rdate) {
    reviewID = rid;
    userID = uid;
    appID = aid;
    reviewName = rname;
    reviewDate = rdate;
}

void Review::displayReview() {
    cout << "Review ID : " << reviewID << endl;
    cout << "User ID : " << userID << endl;
    cout << "App ID : " << appID << endl;
	cout << "Review Name : " << reviewName << endl;
	cout << "Review Date : " << reviewDate << endl;
}

Review::~Review() {}