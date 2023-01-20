// This program allows users to enter a list of integers. Then the program returns the number of even integers entered, the number of odd integers entered, the minimum integer entered, and the total number of integers entered,
#include <iostream>

using namespace std;

// function that returns if total number of ints entered is even or odd
int evenOrOdd (int totalInts)
{
    int numbersEntered = totalInts;
    if (numbersEntered % 2 == 0)
    {
        cout << "even" << endl;
    }
    
    else
    {
        cout << "odd" << endl;
    }
    return 0;
    
}

// main function
int main()
{

    
    
// allows user to enter int stored in userInt variable
    cout << "Type an integer (type 0 to stop):" << endl;
    int userInput;
    cin >> userInput;
    
// sets smallestInt variable equal to userInput
    int smallestInt = userInput;

// loop that runs if userInput is not 0
    while(userInput != 0)
    {
// increments evenNumbers variables if userInput is even
        if (userInput % 2 == 0)
        {
            evenNumbers++;
// prompts user to enter int stored in userInt
            cout << "Type an integer (type 0 to stop):" << endl;
            cin >> userInput;
            
// updates smallestInt variable if user int is smaller than current smaller int and  is not equal to 0
            if (userInput < smallestInt && userInput != 0)
            {
               smallestInt = userInput;
            }
        }
        
// increments oddNumbers variables if userInput is odd
        else
        {
            oddNumbers++;
// prompts user to enter int stored in userInt
            cout << "Type an integer (type 0 to stop):" << endl;
            cin >> userInput;
            
// updates smallestInt variable if user int is smaller than current smaller int and  is not equal to 0
            if (userInput < smallestInt && userInput != 0)
            {
                smallestInt = userInput;
            }
        }
    }
    
    cout << "# of even numbers: " << evenNumbers << endl;
    cout << "# of odd numbers: " << oddNumbers << endl;
    cout << "min: " << smallestInt<< endl;
    cout << "number of integers entered is " << evenOrOdd(evenNumbers + oddNumbers) << endl;
    
    return 0;
}


