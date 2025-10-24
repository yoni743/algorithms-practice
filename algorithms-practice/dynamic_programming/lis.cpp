// Longest Increasing Subsequence (Patience Sorting)
// Time: O(n log n)
// Space: O(n)
#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(const vector<int>& nums){
    vector<int> tails;
    for (int x : nums){
        auto it = lower_bound(tails.begin(), tails.end(), x);
        if (it == tails.end()) tails.push_back(x);
        else *it = x;
    }
    return (int)tails.size();
}

int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(nums) << "\n"; // 4
    return 0;
}
