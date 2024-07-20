class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=n/2;
        map<int,int>mp1;
        for(int i=0;i<n;i++)
        {
            mp1[nums[i]]++;
        }
        for(auto it:mp1)
        {
            if ((it.second)>majority)
            return it.first;
        }
        return 0;
        
    }
};