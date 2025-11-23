#include <iostream>
#include "RegisteredUser.h"
#include "App.h"

using namespace std;

class Review {
    private:
        int reviewID;
        int userID;
        int appID;
        string reviewName;
        string reviewDate;

    public:
        Review();
        Review(int rid, int uid, int aid, string rname, string rdate);
        void displayReview();
        ~Review();
}