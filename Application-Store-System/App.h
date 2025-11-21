#include <iostream>
#include "RegisteredUser.h"

using namespace std;

class App {
    private:
        int appID;
        string appName;
        string appDescription;
        double downloads = 0;
        RegisteredUser *ru[2];

    public:
        App();
        App(int aid, string aname, string ades, double dwlds);
        void downloadedUsers();
        void displayApp();
        ~App();
}