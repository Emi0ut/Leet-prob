class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l =part.length();
        while(s.length()>0&& s.find(part)<s.length()){
        s.erase(s.find(part),l);
        }
        
        return s;
    }
};