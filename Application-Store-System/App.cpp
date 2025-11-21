#include <iostream>
#include "App.h"
#include "RegisteredUser.h"

using namespace std;

App::App() {
    ru[0] = null;
    ru[1] = null;
};

App::App(int aid, string aname, string ades, double dwlds) {
    appID = aid;
    appName = rname;
    appDescription = ades;
    downloads = dwlds;
}

void App::downloadedUsers(RegisteredUser *ru1, RegisteredUser *ru2) {
    ru[0] = ru1;
    ru[1] = ru2;
    downloads += 2;
}

void App::displayApp() {
    cout << "App ID : " << appID << endl;
	cout << "App Name : " << appName << endl;
	cout << "App Description : " << appDescription << endl;
	cout << "No. of Downloads : " << downloads << endl;
}

App::~App() {}