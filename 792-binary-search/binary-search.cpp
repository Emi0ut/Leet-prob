class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int st=0,e=nums.size()-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            if(nums[mid]==tar){
                return mid;
            }else if(tar>nums[mid]){
                st=mid+1;
            }else{
                e=mid-1;
            }
        }
        return -1;
    }
};