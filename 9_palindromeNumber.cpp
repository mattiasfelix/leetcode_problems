/*

    Given an integer x, return true if x is a palindrome, and false otherwise.

*/


#include <iostream>
#include <string>

using namespace std;


// If the same, remove both and repeat until nothing left

bool isPalindrome(int x) {

    // transform number to string
    string number = to_string(x);

    // Check the length of the input
    int length = number.length();

    // Check for 0
    if (length == 1) {
        return true;
    } else {

        // Create a loop with all the characters
        while (length > 1) {
            
            // Check the first and last letter
            if (number[0] == number.back()) {
                
                // Remove the first and last char
                number = number.substr(1, number.size() - 2);

                // Adjust the length of the word
                length = number.length();

                cout << "true";
                cout << "Number: " << number;
                cout << "Length: " << length;
                return true;

            } else {

                cout << "false";
                return false;
            }

        }
    }
    
    cout << "true";
    return true;
}




int main()
{

    isPalindrome(1000021);

    return 0;
}






// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//     }
// };