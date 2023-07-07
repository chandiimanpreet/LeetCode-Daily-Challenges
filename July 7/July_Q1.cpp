class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int len = nums.size();
        int i = len-2;
        
        while(i >= 0 && nums[i+1] <= nums[i])
            i--;

        if(i >= 0) {
            int j = len-1;
            while(j >= 0 && nums[j] <= nums[i]) 
                j--;
            swap(nums[i], nums[j]);
            sort(nums.begin() + i+1, nums.end());
        }
        else 
            sort(nums.begin(), nums.end());
    }
};