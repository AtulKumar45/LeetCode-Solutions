#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums,int target)
{
    
    for(auto i = 0 ; i < nums.size() ; i++)
    {
       if(nums[i] >= target)
       return i;
    }
    return nums.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int target;
    cin>>target;
    vector<int> nums = {1,3,5,6};
    cout<<searchInsert(nums,target);

    return 0;
}