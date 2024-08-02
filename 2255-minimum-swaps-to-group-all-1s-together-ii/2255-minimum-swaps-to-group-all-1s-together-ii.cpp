#include <vector>
#include <algorithm>

class Solution {
public:
    int minSwaps(std::vector<int>& nums) {
        int cnt0 = 0;
        int count1 = std::count(nums.begin(), nums.end(), 1);
        int windowSize = count1;

        for (int i = 0; i < windowSize; ++i) {
            if (nums[i] == 0)
                ++cnt0;
        }

        int mn = cnt0;

        for (int i = windowSize; i < windowSize + nums.size(); ++i) {
            if (nums[i % nums.size()] == 0) 
                ++cnt0;
            if (nums[(i - windowSize) % nums.size()] == 0) 
                --cnt0;
            mn = std::min(mn, cnt0);
        }

        return mn;
    }
};
