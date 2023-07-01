class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i,j,k=0;

        int key = 101;  // Null value out of constraints
        
        for(i=0,j=0; i<nums.size(); i++) {
            if(nums[i] != key) {
                nums[j++] = nums[i];
                k++;
                key = nums[i];
            }
        }
        return k;
    }
};