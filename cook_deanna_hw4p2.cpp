#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int addRandNumber(int &referenceToAge_)
{
    
    int currentAgeInseconds = referenceToAge_ * 31536000;

    srand (time(0) + currentAgeInseconds);
    
    int half_referenceToAge = referenceToAge_/2;
    
    int pseudoRandomInt = rand() % half_referenceToAge + 1;
    
    int lifeSpan = referenceToAge_ + pseudoRandomInt;
    
    return lifeSpan;
}

int main()
{
    int currentAge;
    int &referenceToAge = currentAge;
    
    cout << "Player 1: Enter your age as an integer: " << endl;
    cin >> currentAge;
    
    int predictedFinalAge = addRandNumber(referenceToAge);
    
    cout << "Player 1: Your age will be..." << predictedFinalAge << ". Great isn't it?";
    
    if (predictedFinalAge - currentAge < 10)
    {
        cout << " Consider buying life insurance" << endl;
    }
    
    
    return 0;
}