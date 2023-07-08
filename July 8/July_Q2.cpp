class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mp;
        vector<int> ans;
        int len = nums.size();

        for(int i=0; i<len; i++) {
            for(int j=0; j<nums[i].size(); j++)
                mp[nums[i][j]]++;
        }

        for(auto val: mp) {
            if(val.second == len)
                ans.push_back(val.first);
        }       
        return ans;
    }
};