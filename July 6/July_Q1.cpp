class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v(nums1.size() + nums2.size());

        int j=0;
        for(int i=0; i<nums1.size(); i++,j++) 
            v[j] = nums1[i];
        for(int i=0; i<nums2.size(); i++,j++) 
            v[j] = nums2[i];

        sort(v.begin(), v.end());

        int len = v.size();
        double ans;

        if(len%2 == 0) {
            ans = v[len/2] + v[len/2 - 1];
            return (ans/2);
        }
        else {
            ans = v[len/2];
            return ans;
        }
    }
};