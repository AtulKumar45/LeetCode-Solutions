#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums)
{
    int n = nums.size();
    vector<int> freq(n+1,0);
    for(int it : nums )
        freq[it]++;
       
    for(int i = 0; i < n+1 ; i++)
    {
        if(freq[i] == 0)
        return i;
    }    
    return -1;
}
