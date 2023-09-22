#include "user.h"
#include <iostream>
using namespace std;
int main()
{
    User user1=User();
    user1.setUserName("Darina");
    user1.setPhone("+380676782431");
    user1.setEmail("dshap@gmail.com");
    user1.setPassword("*********");
    user1.print();

    cout << "-------------------------------------------------------------" << endl;

    User user2 = User("Maria", "+38066-42-56-123", "mariadetg@gmail.com", "*******");
    user2.print();


}

