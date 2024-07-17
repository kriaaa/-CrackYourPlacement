
class Solution {
public:
    std::vector<int> permutation(std::vector<int>& nums, int n) {
        int index = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            std::reverse(nums.begin(), nums.end());
            return nums;
        }

        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                std::swap(nums[i], nums[index]);
                break;
            }
        }

        std::reverse(nums.begin() + (index + 1), nums.end());
        return nums;
    }

    void nextPermutation(std::vector<int>& num) {
        int n = num.size();
        num = permutation(num, n);
    }
};