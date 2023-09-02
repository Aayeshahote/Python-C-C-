#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxProduct(vector<string>& words) {
    int max_product = 0;
    
    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            bool has_common = false;
            for (char ch : words[j]) {
                if (words[i].find(ch) != string::npos) {
                    has_common = true;
                    break;
                }
            }
            
            if (!has_common) {
                int product = words[i].length() * words[j].length();
                max_product = max(product, max_product);
            }
        }
    }
    
    return max_product;
}

int main() {
    vector<string> words = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    int result = maxProduct(words);
    cout << result << endl;
    
    return 0;
}

