#include <string>

/*
User - ����������

����:
Username
Phone
Email
Password

������:
enterTheInformation - �������� �񳺿 ���������� ��� ����������
print - ��������� ����� ��� ��������� � �������
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