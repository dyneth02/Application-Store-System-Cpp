#include <iostream>

using namespace std;

class FAQ {
    private:
        int faqID;
        string faqName;
        string faqDate;

    public:
        FAQ();
        FAQ(int faqid, string faqname, string faqdate);
        void displayFAQ();
        ~FAQ();
}