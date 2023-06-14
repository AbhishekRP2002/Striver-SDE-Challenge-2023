#include <bits/stdc++.h> 
// void countPaths(vector<vector<int>> &mat , int i, int j , int &ans)
// {
//   if(i>=mat.size() or j>= mat[0].size())
//   return;
//   if (i == mat.size()-1 and j == mat[0].size()-1) {
//     ans++;
//     return;
//   }
 
//     countPaths(mat, i+1, j,ans);
// 	countPaths(mat, i, j+1, ans);
// }
// int uniquePaths(int m, int n) {
// 	int ans = 0;
// 	vector<vector<int>>mat(m , vector<int>(n ,1));
//     int curr_pos[2] = {0,0};
// 	countPaths(mat , 0 , 0 , ans);
// 	return ans;
// }
// dp or memoization solution to be applied 
 int pathCount(int m ,int n,int i,int j , vector<vector<int>>& dp)
    {
       
        if(i==m-1 and j == n-1)
          return 1;
        if(i >= m or j >= n)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        else
        return dp[i][j] = pathCount(m ,n, i+1 , j , dp) + pathCount(m ,n, i , j+1 , dp);
    }
    int uniquePaths(int m, int n) {
        int i= 0 , j =0;
       //  int ans  = pathCount(m , n , i ,j);
//         The recursive approach will give TLE
        
        vector<vector<int>>dp(m , vector<int>(n,-1));
        int ans  = pathCount(m , n , i ,j , dp);
        return ans;
        
//         ANother approach will be to use Combinatrics m+n-2Cm-1  or m+n-2Cn-1
    }
