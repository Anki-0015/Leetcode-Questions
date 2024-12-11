class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxBeauty = 0, j = 0;

        for (int i = 0; i < n; i++) {
            while (nums[i] - nums[j] > 2 * k) {
                j++;
            }
            maxBeauty = max(maxBeauty, i - j + 1);
        }
        
        return maxBeauty;
    }
};
