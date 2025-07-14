#include <iostream>
#include <cmath>

//Function for addition
void addition()
{
    double a,b;
    std::cout << "Enter two number: ";
    std::cin >> a >> b;
    std::cout << "Result : " << (a + b) << '\n';
}
//Function for subtraction
void subtraction()
{
    double a,b;
    std::cout << "Enter two number: ";
    std::cin >> a >> b;
    std::cout << "Result : " << (a - b) << '\n';
}
//Function for multiplication
void multiplication()
{
    double a,b;
    std::cout << "Enter two number: ";
    std::cin >> a >> b;
    std::cout << "Result : " << (a * b) << '\n';
}
//Function for division
void division()
{
    double a,b;
    std::cout << "Enter two number: ";
    std::cin >> a >> b;
    if(b == 0)
    {
        std::cout << "Error: Division by zero is not allowed." << '\n';
        return;
    }
    std::cout << "Result : " << (a / b) << '\n';
}
//Function for power
void power()
{
    double base;
    int exponent;
    std::cout << "Enter base and exponent : ";
    std::cin >> base >> exponent;
    //Check if 0^0 : undefined
    if(base == 0 && exponent == 0)
    {
        std::cout << "Error : 0^0 undefined!" << '\n';
        return;
    }
    //Check if 0 to negative power : undefined
    if(base == 0 && exponent == 0)
    {
        std::cout << "Error: 0 raised to negative power is undefined!" << '\n';
        return;
    }
    double result{1};
    //Get absolute value of exponent
    int absExponent = abs(exponent);
    // Multiply base by itself absExponent times
    for(int i = 0; i < absExponent; i++)
    {
        result *= base;
    }
    // If exponent is negative, take reciprocal
    if(exponent < 0)
    {
        result = 1 / result;
    }
    // Print the result
    std::cout << base << "^" << exponent << " = " << result << '\n';
} 
//Function for factorial
void factorial()
{
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;
    if(n < 0)
    {
        std::cout << "Error: Factorial is not defined for negative numbers." << '\n';
        return;
    }
    long long result{1};
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    std::cout << "Factorial of " << n << " is: " << result << '\n';
}
int main()
{
    int choice;
    
    while(true)
    //Show menu
    {
    std::cout << "\n=== Calculator Menu ===\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Power(a^b)\n";
    std::cout << "6. Factorial\n";
    std::cout << "7. Exit\n";

    //Get input from user
    std::cout << "Enter your choice (1-7) : ";
    std::cin >> choice;

    //Handle user choice
    switch(choice)
    {
        case 1 : addition(); break;
        case 2 : subtraction(); break;
        case 3 : multiplication(); break;
        case 4 : division(); break;
        case 5 : power(); break;
        case 6 : factorial(); break;
        case 7 : 
            std::cout << "Goodbye!\n";
            return 0;
        default :
            std::cout << "Invalid choice. Please try again.\n";

    }
    // Pause to let user read the result
    std::cout << "Press Enter to continue...";
    std::cin.ignore();
    std::cin.get();
  }
}