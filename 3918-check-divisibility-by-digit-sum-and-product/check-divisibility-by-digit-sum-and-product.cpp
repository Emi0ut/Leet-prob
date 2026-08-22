class Solution {
public:
    bool checkDivisibility(int n) {
        int s=n;
        int sum=0;
        int pro=1;
        while(s!=0){
            sum=sum+s%10;

            s=s/10;
        }
        int p=n;
        while(p!=0){
            pro=pro*(p%10);
            p=p/10;
        }
        
        if(n%(pro+sum)==0){
            return true ;
        }
        return false;
        
    }
};