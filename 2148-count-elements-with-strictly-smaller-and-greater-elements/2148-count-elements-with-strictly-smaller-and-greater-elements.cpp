class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int greater = *max_element(nums.begin(), nums.end());
        int smaller = *min_element(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] > smaller && nums[i] < greater) {
                count++;
            }
        }
        return count;
    }
};