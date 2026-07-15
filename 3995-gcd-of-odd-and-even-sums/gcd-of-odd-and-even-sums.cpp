class Solution {
public:

    int gcd(int sodd,int seven){
        if(sodd==0){
            return seven;
        }else{
            return gcd(seven%sodd,sodd);
        }
    }
    int gcdOfOddEvenSums(int n) {
        int sodd=0,seven=0;
        
        for(int i=1;i<=n;i++){
            sodd+=2*i-1;
            seven+=2*i;
        }
         return gcd(sodd,seven);
    }
};