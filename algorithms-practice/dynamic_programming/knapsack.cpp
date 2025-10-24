// 0/1 Knapsack
// Time: O(n * W)
// Space: O(W)
#include <bits/stdc++.h>
using namespace std;

int knapsack01(const vector<int>& wt, const vector<int>& val, int W){
    vector<int> dp(W+1, 0);
    for (int i = 0; i < (int)wt.size(); ++i){
        for (int w = W; w >= wt[i]; --w){
            dp[w] = max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}

int main(){
    vector<int> wt = {2,3,4,5};
    vector<int> val = {3,4,5,6};
    int W = 5;
    cout << knapsack01(wt, val, W) << "\n"; // 7
    return 0;
}
