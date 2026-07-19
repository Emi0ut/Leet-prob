class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> l;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int st = i + 1, e = n - 1;
            

            while (st < e) {
                int sum =nums[st] + nums[e] + nums[i];
                if ( sum== 0) {
                    l.push_back({nums[st], nums[e], nums[i]});
                    st++;
                    e--;
                    while(st<e && nums[st]==nums[st-1] ){
                        st++;
                    }
                    while(st<e && nums[e]==nums[e+1]){
                        e--;
                    }

                } else if (sum > 0) {
                    e--;

                } else {
                    st++;
                }
            }
        }
        return l;
    }
};