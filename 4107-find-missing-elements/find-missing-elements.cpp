class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=nums[0];
        int e=nums[n-1];
        vector<int>num;
        for(int i=1;i<n;i++){
            for(int j=nums[i-1]+1;j<nums[i];j++){
                num.push_back(j);
            }
        }
        return num;
        
    }
};