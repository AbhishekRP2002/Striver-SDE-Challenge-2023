#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
    int n = arr.size();
    vector<vector<int>>ans;
    std::unordered_map<int, int>mp;
    for(int i=0;i<n;++i)
    {
       if(mp[s - arr[i]])
       {
          int m = mp[s-arr[i]];
          while(m--){
          if(arr[i] > s-arr[i])
          {
             ans.push_back({s-arr[i] , arr[i]});
          }
          else
            ans.push_back({arr[i], s - arr[i]});
          }
       }
      
       mp[arr[i]]++;
    }
 sort(ans.begin() , ans.end());
    return ans;
}
