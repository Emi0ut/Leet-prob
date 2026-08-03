class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        int n = dig.size() - 1;
        int ans;
        for (int i = n; i >= 0; i--) {
            if (dig[i] < 9) {
                dig[i]++;
                return dig;
            }
            dig[i] = 0;
            
        }
         dig.insert(dig.begin(),1);
         return dig;

    }
    
}
;