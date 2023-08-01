class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k;
        int len = n+m-1;

        i=m-1;
        j=n-1;

        while(i>=0 && j>=0) {
            if(nums1[i] >= nums2[j])
                nums1[len--] = nums1[i--];
            else 
                nums1[len--] = nums2[j--];   
        }
        while(j>=0 && len>=0) {
            nums1[len--] = nums2[j--];
        }        
    }
};