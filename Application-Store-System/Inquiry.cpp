#include <iostream>
#include "Inquiry.h"
#include "RegisteredUser.h"

using namespace std;

Inquiry::Inquiry();

Inquiry::Inquiry(int inqid, int uid, string inqname, string inqdate) {
    inquiryID = inqid;
    userID = uid;
    inquiryName = inqname;
    inquiryDate = inqdate;
}

void Inquiry::displayInquiry() {
    cout << "Inquiry ID : " << inquiryID << endl;
    cout << "User ID : " << userID << endl;
	cout << "Inquiry Name : " << inquiryName << endl;
	cout << "Inquiry Date : " << inquiryDate << endl;
}

Inquiry::~Inquiry() {}