// This program prompts the user for their car's fuel efficiency, the outbound distance of their trip, and the inbound distance of their trip. Then it computes the total trip cost.
#include <iostream>

using namespace std;

int main()
{
    cout.precision(2);
    cout.setf(ios::fixed);
    
    float fuelEfficiency;
    cout << "Enter the car fuel efficiency (miles/pal)" << endl;
    cin >> fuelEfficiency;
    if (fuelEfficiency < 0)
    {
        cout << "You entered a negative number, the program will now exit";
        exit(1);
    }
    
    float fuelCost;
    cout << "Enter the fuel cost (dollars/gal)" << endl;
    cin >> fuelCost;
    if (fuelCost < 0)
    {
        cout << "You entered a negative number, the program will now exit";
        exit(1);
    }
    
    float outboundDistance;
    cout << "Enter the outbound distance (miles)" << endl;
    cin >> outboundDistance;
    if (outboundDistance < 0)
    {
        cout << "You entered a negative number, the program will now exit";
        exit(1);
    }
    
    float inboundDistance;
    cout << "Enter the inbound distance (miles)" << endl;
    cin >> inboundDistance;
    if (inboundDistance < 0)
    {
        cout << "You entered a negative number, the program will now exit";
        exit(1);
    }
    
    float totalDistance = outboundDistance + inboundDistance;
   
    float totalGallons = totalDistance/fuelEfficiency;
    
    float tripCost = totalGallons * fuelCost;
    cout << "Trip cost: " << tripCost << " dollars" << endl;
    
    return 0;
}
