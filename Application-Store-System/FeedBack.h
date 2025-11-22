#include <iostream>
#include "RegisteredUser.h"

using namespace std;

class FeedBack {
    private:
        int feedbackID;
        int userID;
        string feedbackName;
        string feedbackDate;

    public:
        FeedBack();
        FeedBack(int fid, int uid, string fname, string fdate);
        void displayFeedBack();
        ~FeedBack();
}