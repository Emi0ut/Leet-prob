class Solution {
public:
    int gcd(int s, int l) {
        if (s == 0) {
            return l;
        } else {
            return gcd(l%s, s);
        }
    }
    int findGCD(vector<int>& nums) {
        int s = INT_MAX, l = INT_MIN;
        int n = nums.size();
        for(int num: nums){
            s=min(s,num);
            l=max(l,num);
        }
        return gcd(s, l);
    }
};