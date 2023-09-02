#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int minMoves2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int median = nums[nums.size() / 2];
    
    int moves = 0;
    for (int i = 0; i < nums.size(); i++) {
        moves += abs(nums[i] - median);
    }
    
    return moves;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int result = minMoves2(nums);
    cout << result << endl;
    
    return 0;
}

