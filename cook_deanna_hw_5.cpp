#include <iostream>
#include <string>

using namespace std;

class User
{
    public: // access specifier, tells c++ that functions in this class can be used outside of this class
   
    string name;
    string motto;
    
    // constructor
    User(string name_, string motto_ )
    {
        name = name_;
        motto = motto_;
    }
    
    // message function
    void sendMessage(string motto, User &otherUser)
    {
        cout << name << " is sending this message: " << motto << endl;
        otherUser.receiveMessage(motto);
       
    }

    // reply function
    void receiveMessage(string motto)
    {
        
      cout << name << " received this message: " << motto << endl;
    
    }
    
};

// main method
int main()
{
    User firstUser("Bill", "I message, therefore I am");
    User otherUser("Ted", "Caveat Emptor");
    
    firstUser.sendMessage(firstUser.motto, otherUser);
    
}