class Solution {
public:
    int countCommas(int n) {
        int c=0;

        if(n>999){
            for(int i=1000;i<=n;i++){
                c++;


            }
            return c;


        }else{
            return 0;
        }
        
    }
};