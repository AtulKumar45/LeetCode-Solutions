#include <bits/stdc++.h>
using namespace std;

void missingMultiple(vector<int>& nums,int k)
{
    int mul = k;
    while(true)
    {
        auto it = find(nums.begin(),nums.end(),mul);
        if(it !=  nums.end())
        mul += k;
        else
        {
            cout<<mul<<endl;
            return;
        } 
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums= {1,4,7,10,15};
    int k = 5;
    missingMultiple(nums,k);

    return 0;
}