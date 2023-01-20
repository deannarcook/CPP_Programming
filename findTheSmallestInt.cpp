// algorithim
// input
// 3 integers x, y, z
// at most 100

// ouput
// the minimum element amoung x, y, z, in other words the element x such that x < any other element amoung x, y, z

// pseudocode
// set up an integer variable smallest which will hold the value of the smallest integer seen so far
// initialize the smallest variable to 101
// comapare x to smallest variable...
// assume x, y, and z are in the array A
// for each element in A
//if the value of A[i] is smaller than smallest integer, then overwrite smallest with the value of A[i]


#include <iostream>

using namespace std;

int main()
{
    int smallest = 101;
    int x;
    int y;
    int z;
    
    // prompts user to enter first integer and stores input in variable x
    cout << "Enter the first integer (must be less than 100)" << endl;
    cin >> x;
    
    // prompts user to enter second integer and stores input in variable y
    cout << "Enter the second integer (must be less than 100)" << endl;
    cin >> y;
    
    // prompts user to enter third integer and stores input in variable z
    cout << "Enter the third integer (must be less than 100)" << endl;
    cin >> z;
    
    if (smallest > x)
    {
        smallest = x;
    }
    
    if (smallest > y)
    {
        smallest = y;
    }
    
    if (smallest > z)
    {
        smallest = z;
    }
    
    cout << "The smallest integer in the list is " << smallest << endl;
    
    
    return 0;
}
