    /* This is a multiple line comment
     *
     * Author Eugene K. 20/04/2022
     * Beginning C++ Programming - From Beginner to Beyond
     */

#include <iostream>  //Preprocessor directive

int main()  // Function. Starting point of program execution.
{
    int favorite_number;  //Assign an integer an store it    
    
    std::cout << "Enter your favorite number between 1 and 100:";
    std::cin >> favorite_number;  //Assign prestored integer by user input
    
    std::cout << "Amazing!! That's my favorite number too!" <<std::endl;
    
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" <<std::endl;
    
    return 0;
}