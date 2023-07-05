class Solution {
public:
    int trap(vector<int>& height) {
        // int maxi = INT_MIN;
        int len = height.size(), i;
        vector<int> left(len), right(len);

        left[0] = height[0];
        right[len-1] = height[len-1];

        for(i=1; i<len; i++) 
            left[i] = max(left[i-1], height[i]);
        
        for(i=len-2; i>=0; i--) 
            right[i] = max(right[i+1], height[i]);
        
        int ans = 0;
        for(i=0; i<len; i++) 
            ans += (min(left[i], right[i]) - height[i]);
        
        return ans;
    }
};