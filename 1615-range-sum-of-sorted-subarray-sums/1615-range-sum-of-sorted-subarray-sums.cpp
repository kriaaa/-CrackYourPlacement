class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int  modulo=1e9+7;

        vector<long long >ans;
        long long int sum;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
    
                sum+=nums[j];
               ans.push_back(sum);
            
            }

            }
        
        int s=ans.size();
        long long ansnum=0;
        sort(ans.begin(),ans.end());
        for(int i=left-1;i<right;i++)
        {
            ansnum=(ansnum+ans[i])%modulo;


        }
        return ansnum;
        
    }
};