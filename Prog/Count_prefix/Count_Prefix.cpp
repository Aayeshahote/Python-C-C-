#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countPrefixes(vector<string>& words, string s) {
    int count = 0;
    
    for (string word : words) {
        if (s.compare(0, word.length(), word) == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<string> words = {"a", "b", "c", "ab", "bc", "abc"};
    string s = "abc";
    int result = countPrefixes(words, s);
    cout << result << endl;
    
    return 0;
}

