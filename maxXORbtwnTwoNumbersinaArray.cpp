#include <bits/stdc++.h> 
int maximumXor(vector<int> arr)
{
    //brute force - find XOR of all pairs and return the maximum
    // efficient - Bit Manip
    // maximizing the number of non overlapping ones ?
      int maxx = 0, mask = 0;
 int n = arr.size();
    set<int> se;
 
    for (int i = 30; i >= 0; i--) {
        mask |= (1 << i);
 
        for (int i = 0; i < n; ++i) {

            se.insert(arr[i] & mask);
        }
 
        int newMaxx = maxx | (1 << i);
 
        for (int prefix : se) {
            if (se.count(newMaxx ^ prefix)) {
                maxx = newMaxx;
                break;
            }
        }
   
        se.clear();
    }
 
    return maxx;

