class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>lol;
        for(int num : nums){
            if(lol.find(num)!=lol.end()){
                return num;
            }
            lol.insert(num);
        }
        return -1;
        
    }


};