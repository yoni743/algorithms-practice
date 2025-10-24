// Number of Islands (DFS on grid)
// Time: O(R*C)
// Space: O(R*C)
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<string>& g, int r, int c){
    int R = g.size(), C = g[0].size();
    if (r<0||r>=R||c<0||c>=C||g[r][c] != '1') return;
    g[r][c] = '0';
    dfs(g,r+1,c); dfs(g,r-1,c); dfs(g,r,c+1); dfs(g,r,c-1);
}

int numIslands(vector<string> g){
    int R = g.size(); if (!R) return 0; int C = g[0].size();
    int cnt = 0;
    for (int r=0;r<R;++r){
        for (int c=0;c<C;++c){
            if (g[r][c]=='1'){
                ++cnt; dfs(g,r,c);
            }
        }
    }
    return cnt;
}

int main(){
    vector<string> g = {"11000","11000","00100","00011"};
    cout << numIslands(g) << "\n"; // 3
    return 0;
}
