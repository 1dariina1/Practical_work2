#include <iostream>
#include "user.h"

using namespace std;
User::User(){}
User::~User(){}
/// <summary>
/// 
/// </summary>
void User::enterTheInformation() {
	cout << "Username : " << endl; cin >> userName;
	cout << "Phone : " << endl; cin >> phone;
	cout << "Email : " << endl; cin >> email;
	cout << "Password : " << endl; cin >> password;
}

void User::print() {
	if (!userName.empty() && !phone.empty() && !email.empty() && !password.empty()) {
		cout << "You have successfully logged into the application!" << endl;
	}
	else cout << "Please fill in all fields.";
}

string User::getUserName() { return userName; }

void User::setUserName(string _userName) { userName = _userName; }
