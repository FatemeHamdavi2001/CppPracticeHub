#include <iostream>
// Check if year is leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// Get deays in a month using switch-case
int getDaysInMonth(int month, int year)
{
    switch (month)
    {
    case 1: //January
    case 3: //March
    case 5: //May
    case 7: //July
    case 8: //August
    case 10: //October
    case 12: //December
        return 31;
    case 4: //April
    case 6: //June
    case 9: //September
    case 11: //November
        return 30;
    case 2: //February
        return isLeapYear(year) ? 29 : 28;
    default:
        //Invalid month
        return 0; 
    }
}
// Check if date is valid
bool isValidDate(int day, int month, int year)
{
    // Check month (1 to 12)
    if(month < 1 || month > 12)
       return false;
    // Check year (1 to 9999)
    if(year < 1 || year > 9999)
       return false;
    //Get max days for the month
    int maxDays = getDaysInMonth(month, year);
    //Check day(1 to maxDays)
    if(day < 1 || day > maxDays)
       return false;
    
    return true;
}
// Print if date is valid or not
void printValidationResult(int day, int month, int year)
{
    if(isValidDate(day, month, year))
    {
        std::cout << "Date " << day << "/" << month << "/" << year << " is valid." <<'\n';
    } else {
        std::cout << "Date " << day << "/" << month << "/" << year << " is invalid." <<'\n';
    // Show whay date is invalid
        if(month < 1 || month > 12)
       {
           std::cout << "Reason: Month must be between 1 and 12." << '\n';
       } else if(year < 1 || year > 9999) {
           std::cout << "Reason: Year must be between 1 and 9999." << '\n';
       } else {
           std::cout << "Reason: Day must be between 1 and " << getDaysInMonth(month, year) << " for this month." << '\n';
    }
  }
}
int main()
{
    int day,month,year;

    //Get input from user
    std::cout << "Enter date (day month year): ";
    std::cin >> day >> month >> year;
    //Check if input is a number
    if(std::cin.fail())
    {
        std::cout << "Invalid input: Please enter numeric values." << '\n';
        return 1;
    }
    // Show result
    printValidationResult(day, month, year);
    return 0;
}