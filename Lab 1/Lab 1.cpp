// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;


int main()
{
   
    double firstnumber, secondnumber, thirdnumber;
    // Setting up the space for variables 
   
    cout << "What is the first number you would like to use for multiplication? \n";
    cin >> firstnumber;
    cout << "Perfect, I will use ";
    cout << firstnumber;
    cout << " in the multiplication part of the problem";
    cout << ".\n"; 
    system("pause");
    // Asking for the first number and assigning it to a variable

    cout << "Perfect. Now, what is the number you want me to multiply ";
    cout << firstnumber;
    cout << " by? \n";
    cin >> secondnumber;
    cout << "Great! I will multiply ";
    cout << firstnumber;
    cout << " by ";
    cout << secondnumber;
    cout << ".\n";
    system("pause");
    // Asking for the second number and assigning it to a variable. Also, confirming the math that will occur.

    cout << firstnumber << " times " << secondnumber;
    cout << " is " << firstnumber * secondnumber << "\n";
    system("pause");

    cout << "Now that we have that figured out. \n";
    cout << "What number would you like me to add to that? \n";
    cin >> thirdnumber;
    cout << "Perfect. I will add " << thirdnumber << " to " << firstnumber * secondnumber << " . \n";
    cout << firstnumber << " times " << secondnumber << " plus " << thirdnumber;
    cout << " is " << firstnumber * secondnumber + thirdnumber << "\n";
    system("pause");

    






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
