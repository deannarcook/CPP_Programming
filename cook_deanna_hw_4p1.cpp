#include <iostream>
#include <iomanip>

using namespace std;

double untilLunch(int hours_, int minutes_, int seconds_)
{
    int hours = hours_;
    int minutes = minutes_;
    int seconds = seconds_;
    
    int lunchSeconds = 43200;
    
    int hoursInSeconds = hours * 3600;
    int minutesInSeconds = minutes * 60;
    int lastAteInSeconds = hoursInSeconds + minutesInSeconds + seconds;
    
    int secondsUntilLunch = lunchSeconds - lastAteInSeconds;
    
    return secondsUntilLunch ;
}

int main()
{
    int hours_userInput;
    int minutes_userInput;
    int seconds_userInput;
    
    cout << "Lunch is at 12pm. When did you last eat? Enter the hour" << endl;
    cin >> hours_userInput;
    
    cout << "Now enter the minutes" << endl;
    cin >> minutes_userInput;
    
    cout << "Now enter  the seconds" << endl;
    cin >> seconds_userInput;
    
    if (untilLunch(hours_userInput, minutes_userInput, seconds_userInput) < 7200 && untilLunch(hours_userInput, minutes_userInput, seconds_userInput) > 0 )
    {
        cout << "You last ate at " << setfill('0') << setw(2) << hours_userInput << ":" << setfill('0') << setw(2) << minutes_userInput<< ":" << setfill('0') << setw(2) << seconds_userInput << " which is " << untilLunch(hours_userInput, minutes_userInput, seconds_userInput)  << " seconds until lunch! Hope you can handle it. Remember not to skip lunch." << endl;
    }
    
    if (untilLunch(hours_userInput, minutes_userInput, seconds_userInput) < 0)
    {
        cout << "You've eaten lunch. No snacking!" << endl;
    }
    
    if (untilLunch(hours_userInput, minutes_userInput, seconds_userInput) > 7200)
    {
        cout << "You last ate at " << setfill('0') << setw(2) << hours_userInput << ":" << setfill('0') << setw(2) << minutes_userInput<< ":" << setfill('0') << setw(2) << seconds_userInput << " which is " << untilLunch(hours_userInput, minutes_userInput, seconds_userInput)  << " seconds until lunch! Hope you can handle it. Remember not to snack before lunch." << endl;
    }
    
    
    
}