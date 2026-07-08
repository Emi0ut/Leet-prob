class Solution {
public:
    int singleNonDuplicate(vector<int>& k) {
        int n=k.size();
        int st=0,e=n-1;
        if(n==1) return k[0];
        while(st<=e){
            int mid=st+(e-st)/2;
            if(mid == 0 && k[0] != k[1]) return k[mid];
            if(mid==n-1&&k[n-1]!=k[n-2]) return k[mid];

            if(k[mid-1]!=k[mid]&&k[mid+1]!=k[mid]){
                return k[mid];
            }
            if(mid%2==0){
                if(k[mid-1]==k[mid]){
                    e=mid-1;
                }else{
                    st=mid+1;
                }
            }else{
                if(k[mid-1]==k[mid]){
                    st=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return 0;
        
    }
};