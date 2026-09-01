class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxdiff = 0;
        for(int i = 0; i < nums.size() - 1 ; i++)
        {
            if(nums[i+1] - nums[i] > maxdiff)
            maxdiff = nums[i+1] - nums[i];
        }
        return maxdiff;
        
    }
};