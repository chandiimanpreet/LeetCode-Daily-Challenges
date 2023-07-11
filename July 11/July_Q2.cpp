class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i;
        map<int,int> hash;
        vector<int>::iterator len;

        len = max_element(nums.begin(),nums.end());
        
        for(i=0; i<nums.size(); i++)
            hash[nums[i]]++;

        for(i=1; i<=(*len); i++) {
            if(hash[i] == 0)    // hash.count(i) == 0
                return i;
        }
        return i;        
    }
};