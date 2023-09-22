/*void User::enterTheInformation() {
	cout << "Phone : " << endl; cin >> phone;
	cout << "Email : " << endl; cin >> email;
	cout << "Password : " << endl; cin >> password;
}*/

#include <iostream>
#include "user.h"

using namespace std;
User::User(){}
User::User(string _userName, string _phone, string _email, string _password)
	:userName(_userName), phone(_phone), email(_email), password(_password) {}
User::~User() {}



void User::printAllInformation() {
	cout << "Username : " <<  userName << endl;
	cout << "Phone : " <<  phone << endl;
	cout << "Email : " << email << endl;
	cout << "Password : " <<  password << endl;
}

void User::print() {
	if (!userName.empty() && !phone.empty() && !email.empty() && !password.empty()) {
		cout << "You have successfully logged into the application! Your data:" << endl;
		User::printAllInformation();
	}
	else cout << "Please fill in all fields.";
}

string User::getUserName() { return userName; }
void User::setUserName(string _userName) { userName = _userName; }

string User::getPhone() { return phone; }
void User::setPhone(string _phone) { phone = _phone; }

string User::getEmail() { return email; }
void User::setEmail(string _email) { email = _email; }

string User::getPassword() { return password; }
void User::setPassword(string _password) {password = _password;}