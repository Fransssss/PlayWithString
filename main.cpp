// Title : Play with Basic String
// Purpose : Pratice using .append("") to add word just right after a string, practice use
// .find() to locate index of a char, and practice .substr(I,L) to take a substring from a string
// Enjoy the Process - Practice makes Improvement
// Author : Fransiskus Agapa

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

int main() {
    char optionOne = '1';
    char optionTwo = '2';
    char optionThree = '3';
    char userInput;

    cout << "\n 1. Append '.' period at the end of caption" << endl;
    cout << " 2. Find Index of Item from input" << endl;
    cout << " 3. Substring from input " <<endl;

    cout << "\n Enter your selection: " << endl;
    cin >> userInput;

    while(userInput != 'q' || userInput != 'Q')
    {
        if(userInput == optionOne)
        {
            string wordAppend;
            int lastOne;
            char checkPeriod;

            cout << " Enter a caption :" << endl;
            cin >> wordAppend;
            lastOne = wordAppend.length() - 1;                         // point to last index of input
            checkPeriod = wordAppend.at(lastOne);                   // try to locate the position that period should appear

            if(checkPeriod != '.')
            {
                wordAppend.append(".");                              // append period to the end of string
                cout << " Line with a period " << wordAppend << endl;
                break;
            } else
            {
                cout << " The line already has a period " << wordAppend << endl;
                break;
            }
        }

        if(userInput == optionTwo)
        {
            string wordFind;
            char charFind;
            int charPos;
            cout << " Input a word to find a character from " << endl;
            cin >> wordFind;
            cout << " This is the word [ " << wordFind << " ]\n Pick a character to locate : " << endl;
            cin >> charFind;                                                                           // user input char to find
            charPos = wordFind.find(charFind);                                                      // find char from user input
            cout << "[ " << charFind << " ] is located at index " << charPos << endl;
            break;
        }

        if(userInput == optionThree)
        {
            string subStr;
            string takeSubStr;
            int index = 0;
            int lenSub = 0;
            int lenString = 0;

            cout << " Input a word to take substring from : " << endl;
            cin >> subStr;
            lenString = subStr.length();                                                     // find the length or user input
            cout << " The length of the word/s you put is " << lenString << " make sure not to index greater than the size " << endl;
            cout << "\n Enter at what index you like to start (first character is at 0) : " << endl;
            cin >> index;                                                                    // index to take substring
            cout << " Enter the length of words you want to take :" << endl;
            cin >> lenSub;                                                                   // length to take from
            takeSubStr = subStr.substr(index,lenSub);
            cout << " You take [ " << takeSubStr << " ] from the original word " << endl;
            break;
        }

        if(userInput != optionOne && userInput != optionTwo && userInput != optionThree)
        {
            cout << " Invalid Input " << endl;
            break;
        }
    }

    return 0;
}
