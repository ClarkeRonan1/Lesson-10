#include <iostream>
#include <cstring>  //for c-style string functions
#include <cctype>   //for character-based functions

using namespace std;
int main()
{
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};
    //The aim of this program is to read
    //a whole line of input
    
    cout << "Enter full name: ";
    cin.getline(fullName, 50);
    //50 is the limit of input of name
    //waits to hit 50 or enter key
    cout << "Your full name is: " << fullName << endl;
    
    //comparison of strings
    cout << "---------------------------" << endl;
    strcpy(temp, fullName);
    //Compare the two strings
    if(strcmp(temp,fullName) == 0)
        cout << temp << " and " << fullName << " are the same" << endl;

    else
        cout << temp << " and " << fullName << " are different" << endl;
        
    cout << "--------------------------------" << endl;
    
    
    //Using a for loop to iterate instead
    for (size_t i{0}; i < strlen(fullName); i++)
    {
        //Check if the character is a letter
        if (isalpha(fullName[i]))
        {
            fullName[i] = toupper(fullName[i]);
        }
    }
    cout << "Your full name is " << fullName << endl; 
    
    
    //Now compare the uppercase letter and regular
    
    cout << "-------------------------" << endl;
    if (strcmp(temp, fullName) == 0)
    {
        cout << temp << " and " << fullName << " are the same" << endl; 
    }
    
    else
        cout << temp << " and " << fullName << " are different" << endl;
        
    cout << "--------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << fullName << ": " << strcmp(temp, fullName) << endl;
    cout << "Result of comparing " << fullName << " and " << temp << ": " << strcmp(fullName,temp) << endl;
    return 0;
}