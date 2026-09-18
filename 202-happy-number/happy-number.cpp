class Solution {
public:
    int  sque(int n){
        int k=n;
        int l=0;
        while(k!=0){
            int dig=k%10;
            l+=dig*dig;
            k=k/10;
            
        }
        return l;
    };
    bool isHappy(int n) {
        set<int>seen;
        if(n<0){
            return false;
        }

        while(n!=1){
            if(seen.count(n)){
                return false;
            }
            seen.insert(n);
            n=sque(n);

            
        }
        return true;

        
    }
};