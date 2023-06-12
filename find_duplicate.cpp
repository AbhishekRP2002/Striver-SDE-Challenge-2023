
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	map<int, int>mp;
	for(auto i:arr)
	mp[i]++;

	for(int i=0;i<n;++i)
	{
		if(mp[arr[i]] > 1)
		return arr[i];
	}

	return 0;
}
