#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address) {
    string defangedAddress;
    
    for (char ch : address) {
        if (ch == '.') {
            defangedAddress += "[.]";
        } else {
            defangedAddress += ch;
        }
    }
    
    return defangedAddress;
}

int main() {
    string address = "1.1.1.1";
    string result = defangIPaddr(address);
    cout << result << endl;
    
    return 0;
}

