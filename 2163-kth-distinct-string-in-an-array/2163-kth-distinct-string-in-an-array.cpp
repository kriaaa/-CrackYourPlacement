class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        for (auto it : arr) {
            mp[it]++;
        }
        
        vector<string> ans;
        for (auto it : arr) {
            if (mp[it] == 1) {
                ans.push_back(it);
            }
        }
        
        if (k > ans.size()) {
            return "";
        }
        
        return ans[k - 1];
    }
};
