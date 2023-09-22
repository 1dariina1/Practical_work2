#include <string>

/*
User - користувач

Поля:
Username
Phone
Email
Password

Методи:
enterTheInformation - введення всієї інформації для регістрації
print - виведення даних про входження в додаток
*/

class User {
	// fields 
	std::string userName, phone, email, password;

public:
	User(); // -> constructor
	~User(); // -> destructor

	void enterTheInformation();
	void print();


	// getters and setters
	std::string getUserName();
	void setUserName(std::string _userName);

};