#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    unordered_map<int, int> numFreq;
    int count = 0;
    
    for (int num : nums) {
        numFreq[num]++;
    }
    
    for (auto& entry : numFreq) {
        if (k == 0) {
            if (entry.second > 1) {
                count++;
            }
        } else {
            if (numFreq.count(entry.first + k) > 0) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    int result = findPairs(nums, k);
    cout << result << endl;
    
    return 0;
}

