#include <iostream>
#include <iomanip> //For setw and setfill
#include <windows.h> //For sleep (windows-spectific)

//Function to display time in HH:MM:SS format
void printTime(int hours, int minutes, int seconds) 
{
    std::cout << '\r'; // Go to the beginning of the line
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setfill('0') << std::setw(2) << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::flush;
}
//Function to update time variables
void updateTime(int& hours, int& minutes, int& seconds)
{
    seconds++; //Add one seconds
    //Carry over to minutes
    if(seconds >= 60) {
        seconds = 0;
        minutes++;
    }
    //Carry over to hours
    if(minutes >= 60) {
        minutes = 0;
        hours++;
    }
    //Reset after 24 hours
    if(hours > 24) {
        hours = 0;
    }
}
int main()
{
    //Initial time
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    while (true)
    {
        //Clear screen(windows only)
        system("cls");
        //Display current time
        printTime(hours, minutes, seconds);
        //Pause for 1 second
        Sleep(1000);
        //Increment time
        updateTime(hours, minutes, seconds);
    }
    return 0;
    
}