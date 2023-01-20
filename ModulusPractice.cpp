#include <iostream>

using namespace std;

int main()
{
    int smallestInt;
    
    // user input: first int
    cout << "Enter the first integer" << endl;
    int firstInt;
    cin >> firstInt;
    
    // user input: second int
    cout << "Enter the second integer" << endl;
    int secondInt;
    cin >> secondInt;
    
    // sum of first int and second int
    int sum = firstInt + secondInt;
    cout << "The sum of the values " << firstInt << " and " << secondInt << " is: " << sum << endl;
    
    // find smallest int
    if (firstInt > secondInt)
    {
       smallestInt = secondInt;
    }
    
    else
    {
        smallestInt = firstInt;
    }
    
    // output if smallest int is even or odd
    if (smallestInt % 2 == 0)
    {
        cout << smallestInt << " is even" << endl;
    }
    
    else
    {
        cout << smallestInt << " is odd" << endl;
    }
    
    // output if sum minus smallest int is even or odd
    if ((sum - smallestInt) % 2 == 0  )
    {
        cout << sum - smallestInt << " is even" << endl;
    }
    
    else
    {
        cout << sum - smallestInt << " is odd" << endl;
    }
    
    // output if sum is even or odd
    if (sum % 2 == 0)
    {
        cout << "The sum of the values (" << sum << ") is even" << endl;
    }
    
    else
    {
        cout << "The sum of the values (" << sum << ") is odd" << endl;
    }
}
