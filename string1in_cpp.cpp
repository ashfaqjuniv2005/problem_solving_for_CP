#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "There are two needles in this haystack with needles.";
    string str2 = "needle";
    size_t found;

    if ((found = str.find(str2)) != string::npos)
        cout << "first 'needle' found at: " << found << '\n';

    if ((found = str.find("needles are small", found + 1, 6)) != string::npos)
        cout << "second 'needle' found at: " << found << '\n';

    if ((found = str.find("haystack")) != string::npos)
        cout << "'haystack' also found at: " << found << '\n';

    if ((found = str.find('.')) != string::npos)
        cout << "Period found at: " << found << '\n';

    str.replace(str.find(str2), str2.length(), "preposition");
    cout << str << '\n';

    return 0;
}