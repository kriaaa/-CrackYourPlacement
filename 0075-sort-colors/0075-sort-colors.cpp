class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        int low=0;
        int mid=0;
        int high=size-1;
        for(int i=0;i<size;i++)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};