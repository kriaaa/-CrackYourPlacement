

class Solution {
public:
    int rangeSum(std::vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        std::vector<long long> ans;
        long long sum;
        
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                ans.push_back(sum);
            }
        }
        
        std::sort(ans.begin(), ans.end());
        
        long long ansnum = 0;
        for (int i = left - 1; i < right; i++) {
            ansnum = (ansnum + ans[i]) % MOD;
        }
        
        return ansnum;
    }
};
