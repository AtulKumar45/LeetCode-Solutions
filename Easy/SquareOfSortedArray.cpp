#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int>& nums)
{
    vector<int> ans(nums.size());
    int i = 0;
    int j = nums.size() - 1;
    int k = nums.size() -1;
    while(i <= j)
    {
        if(abs(nums[i]) > abs(nums[j]) )
        {
            ans[k] = nums[i]*nums[i];
            i++;
        }
        else
        {
            ans[k]=nums[j]*nums[j];
            j--;
        }
        k--;
        
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {-4 ,-1,0,3,10};

    for(auto it : sortedArray(nums))
    {
        cout<<it<<" ";
    }

    return 0;
}