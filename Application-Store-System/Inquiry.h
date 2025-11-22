#include <iostream>
#include "RegisteredUser.h"

using namespace std;

class Inquiry {
    private:
        int inquiryID;
        int userID;
        string inquiryName;
        string inquiryDate;

    public:
        Inquiry();
        Inquiry(int inqid, int uid, string inqname, string inqdate);
        void displayInquiry();
        ~Inquiry();
}