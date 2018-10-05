#include <iostream>
#include <cstring>  //for c-style string functions
#include <cctype>   //for character-based functions

using namespace std;
int main()
{
    //Initialise each character array to blank
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};
    
    cout << "Please enter your first name: ";
    cin >> firstName;
    
    cout << "Please enter your last name: ";
    cin >> lastName;
    cout << "-------------------------" << endl;
    
    cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
    cout << "and your last name " << lastName << " has " << strlen(lastName) << " characters" << endl;
    
    //strlen function is where you ask someone else to do something
    //for you!
    
    //strlen returns size_t which is an insigned
    //integer
    
    strcpy (fullName, firstName);    //copy firstName into fullName
    strcat (fullName, " ");  //concatenate fullName and a space
    strcat (fullName, lastName);    //concantenate lastName into fullName
    
    cout << "Your full name is " << fullName << endl;
    
    return 0;
}