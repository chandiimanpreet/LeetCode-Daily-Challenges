class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, maxSum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {

            if(i < k) {
                sum += nums[i];
                continue;
            }
            maxSum = max(maxSum, sum);
            sum += nums[i];
            sum -= nums[i-k];
                
        }
        maxSum = max(maxSum, sum); 
        return (double)maxSum / k;
    }
};