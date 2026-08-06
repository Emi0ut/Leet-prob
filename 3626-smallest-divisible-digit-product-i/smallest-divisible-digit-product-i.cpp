class Solution {
public:

    int sumofdig(int org){
         int sum=1;
        while(org!=0){
            sum*=org%10;
            org=org/10;
        }
        return sum;
    }
    int smallestNumber(int n, int t) {
       
        int org=n;
        
        while(true){
            if(sumofdig(org)%t==0){
                return org;
            }else{
                org++;
            }

        }
        
    }
};