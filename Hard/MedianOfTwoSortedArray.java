class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int size = nums1.length + nums2.length;
        int [] nums3 = new int[size];
        for(int i = 0; i < nums1.length; i++){
            nums3[i] = nums1[i];
        }
        for(int i = nums1.length; i < size; i++){
            nums3[i] = nums2[i-nums1.length];
        }
        int temp;
        for(int i = 0; i < size-1; i++)
        {
            for(int j = i + 1; j < size; j++)
            {
                if(nums3[i] > nums3[j])
                {
                    temp = nums3[i];
                    nums3[i] = nums3[j];
                    nums3[j] = temp;
                }
            }
        }
        if((size & 1) == 0)
            return (double)(nums3[(size -1)/2]+nums3[size/2])/2;
        else
            return nums3[size/2];
        
    }
}