//
// Created by Todd Young on 3/25/17.
//

#include <iostream>
#include "std_lib_facilities.h"

int main() {
    // A simple program that talks with the user a bit. It isn't particularly a long conversation.

    cout << "Please enter your first, last name, and your age respectively(followed by 'enter'):\n";
    string first_name = "???"; // fist_name is a variable of type string
    string last_name = "???";
    int age =0;
    cin >> first_name >> last_name >> age; // read characters into first_name, last_name, and age.
    cout << "Hello, " << first_name << " " << last_name << " (age " << age << ")!\n";

    cout << "Let's try some work with numbers!\n";
    cout << "Enter two numbers:\n";
    double num1 = 0.0;
    double num2 = 0.0;

    while(!(cin >> num1 >> num2)){
        cout << "Numeric values, please!\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Good choices! I have always loved the numbers " << num1 << " and " << num2 << "!\n";

    if (num1 == num2){
        cout << "I see that you have a penchant for regularity.";
    } else if (num1 < num2){
        cout << "Did you know, if you looked at the number line, " << num1 << " falls before " << num2 << "?";
    } else {
        cout << "Perhaps I shouldn't generalize from one example, but do you always list your numbers in reverse "
                "chronological order?";
    }

    return 0;
}