class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mC;      // char to char mapping
        map<char,bool> mB;      // char to bool mapping of String T;

        for(int i=0; i<t.size(); i++) {
            if(mC.find(s[i]) != mC.end() && mC[s[i]] != t[i]) 
                return false;             
            else if(mB[t[i]] == true && mC[s[i]] != t[i])
                return false;   
            else {
                mC[s[i]] = t[i];
                mB[t[i]] = true;
            }
        }
        return true;        
    }
};