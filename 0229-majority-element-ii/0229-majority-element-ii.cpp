class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int majority=n/3;
        map<int,int>mp1;
        for(int i=0;i<n;i++)
        {
            mp1[nums[i]]++;
        }
        for(auto it:mp1)
        {
            if ((it.second)>majority)
            ans.push_back(it.first);
        }
        return ans;
        
    }

    
};