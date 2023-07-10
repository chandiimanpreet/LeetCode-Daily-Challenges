class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int, string> mp;
        map<int,string>::reverse_iterator rit;

        for(int i=0; i<heights.size(); i++)
            mp[heights[i]] = names[i];
        
        for (rit=mp.rbegin(); rit!=mp.rend(); ++rit)
            ans.push_back(rit->second);
        
        return ans;
    }
};