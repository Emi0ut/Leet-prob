class Solution {
public:
    int gcd(int maxs, int num) {
        if (num == 0) {
            return maxs;
        } else {
            return gcd(num, maxs%num);
        }
    }
    long long gcdSum(vector<int>& nums) {
        int  n = nums.size();
        int s = INT_MIN, b = INT_MAX;
        vector<int> arr;
        int maxs = INT_MIN;
        for (int num : nums) {
            maxs = max(num, maxs);
            arr.push_back(gcd(maxs, num));
        }
        sort(arr.begin(),arr.end());
        int st=0,e=arr.size()-1;
        long long sum=0;
        while(st<e){
            sum+=gcd(arr[st],arr[e]);
                st++;
                e--;
            }
            return sum;
        }     
};