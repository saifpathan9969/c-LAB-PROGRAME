#include <iostream>
#include <string>
using namespace std;

int main() {

string str = "Saif";

     // Concatenation
     string greeting = str + ", pathan";
     cout << "Concatenation: " << greeting << endl;

    // Substring
    string part = greeting.substr(6, 6); // Extracts "pathan"
    cout << "Substring: " << part << endl;

    // Find
    size_t pos = greeting.find("pathan");
    cout << "Find: 'pathan' found at position " << pos << endl;

    // Replace
    string replaced = greeting;
    replaced.replace(pos, 6, "zaid");
    cout << "Replace: " << replaced << endl;
 
    // Insert
    string inserted = greeting;
    inserted.insert(5, " shafik");
    cout << "Insert: " << inserted << endl;

    // Erase
    string erased = greeting;
    erased.erase(5, 7); // Removes " shafik"
    cout << "Erase: " << erased << endl;

    // To uppercase
    string uppercase = greeting;
    for (char &c : uppercase) c = toupper(c);
    cout << "To Uppercase: " << uppercase << endl;

    // To lowercase
    string lowercase = greeting;
    for (char &c : lowercase) c = tolower(c);
    cout << "To Lowercase: " << lowercase << endl;

return 0;

  
}
  























