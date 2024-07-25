class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int longest=1;
        int last_smaller=INT_MIN;
        int i=0;
        while(i<n)
        {
            if(nums[i]-1==last_smaller)
            {
                count+=1;
                last_smaller=nums[i];
            }
            else if(nums[i]!=last_smaller)
            {
                count=1;
                last_smaller=nums[i];
            }
            longest=max(longest,count);
            i++;
        }

        return longest;

        
    }
};