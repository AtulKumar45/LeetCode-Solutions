#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1,int m,vector<int>& nums2,int n)
{
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i >= 0 && j >= 0)
    {
        if(nums1[i] <= nums2[j])
        {
            nums1[k]= nums2[j];
            j--;
        }
        else 
        {
            nums1[k] = nums1[i];
            i--;
        }
        k--;
    }
     while(j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    for(auto it : nums1)
    cout<<it<<" ";
        
}
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m= 3,n= 3;
    vector<int> nums1;
    nums1 = {1,2,4,0,0,0};
    vector<int> nums2;
    nums2 = {2,3,5};
    merge(nums1,m,nums2,n);

    return 0;
}