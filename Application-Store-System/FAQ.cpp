#include <iostream>
#include "FAQ.h"

using namespace std;

FAQ::FAQ();

FAQ::FAQ(int faqid, string faqname, string faqdate) {
    faqID = faqid;
    faqName = faqname;
    faqDate = faqdate;
}

void FAQ::displayFAQ() {
    cout << "FAQ ID : " << faqID << endl;
	cout << "FAQ Name : " << faqName << endl;
	cout << "FAQ Date : " << faqDate << endl;
}

FAQ::~FAQ() {}