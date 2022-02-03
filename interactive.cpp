#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Ask and remember a user's name and say hello
 *
 * Run as (with gcc):
 *
 * c++ -o interactive interactive.cpp
 * ./interactive
 *
 * Or with clang:
 *
 * clang -x c++ -o interactive interactive.cpp
 * ./interactive
 */
int main()
{
    string value;
    vector<string> names;
    bool running = true;

    while (running)
    {
        cout << "Your name: ";
        cin >> value;

        if (value == "exit") {
            running = false;
            cout << "Bye!\n";
        } else if (find(names.begin(), names.end(), value) != names.end()) {
            cout << "Hello " << value << ", we have met before :)\n";
        } else {
            names.push_back(value);
            cout << "Hi " << value << "!\n";
        }
    }
}
