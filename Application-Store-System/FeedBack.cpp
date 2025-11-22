#include <iostream>
#include "FeedBack.h"
#include "RegisteredUser.h"

using namespace std;

FeedBack::FeedBack();

FeedBack::FeedBack(int fid, int uid, string fname, string fdate) {
    feedbackID = fid;
    userID = uid;
    feedbackName = fname;
    feedbackDate = fdate;
}

void FeedBack::displayFeedBack() {
    cout << "FeedBack ID : " << feedbackID << endl;
    cout << "User ID : " << managerID << endl;
	cout << "FeedBack Name : " << feedbackName << endl;
	cout << "FeedBack Date : " << feedbackDate << endl;
}

FeedBack::~FeedBack() {}