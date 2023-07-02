class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0, len = nums.size();
        int maxSum = INT_MIN;
        
        for(int i=0; i<len; i++){
            sum += nums[i];
            maxSum = max(maxSum,sum);
            if(sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};