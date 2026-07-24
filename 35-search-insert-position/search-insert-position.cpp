class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] >=tar) {
                return i;
            } 
        }
        return nums.size();
    }
};
