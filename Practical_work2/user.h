#include <string>
using namespace std;
/*
User 

Fields:
Username
Phone
Email
Password

Methods:
printAllInformation - about user(s)
printTheInformationAboutStatus - entered or not to the app
*/

class User {
	// fields 
	string userName="", phone="", email="", password="";

public:
	User(); // -> constructor
	User(string _userName, string _phone, string _email, string _password);
	~User(); // -> destructor

	void print();
	void printAllInformation();


	// getters and setters
	string getUserName();
	void setUserName(string _userName);

	string getPhone();
	void setPhone(string _phone);

	string getEmail();
	void setEmail(string _email);

	string getPassword();
	void setPassword(string _password);

};
