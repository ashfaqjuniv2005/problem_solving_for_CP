#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "There are two needles in this haystack with needles.", n = "needle";
    size_t p;

    if ((p = s.find(n)) != string::npos) cout << "first 'needle' found at: " << p << '\n';
    if ((p = s.find("needles are small", p + 1, 6)) != string::npos) cout << "second 'needle' found at: " << p << '\n';
    if ((p = s.find("haystack")) != string::npos) cout << "'haystack' also found at: " << p << '\n';
    if ((p = s.find('.')) != string::npos) cout << "Period found at: " << p << '\n';

    s.replace(s.find(n), n.length(), "preposition");
    cout << s;
}
