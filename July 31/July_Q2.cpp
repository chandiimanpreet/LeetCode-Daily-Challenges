class Solution {
public:
    vector<int> mergesorted(vector<int>&arr) {
        if(arr.size() == 1) 
            return arr;
        
        int mid = arr.size() / 2;

        vector<int> merge1,merge2;
        
        for(int i=0; i<mid; i++) 
            merge1.push_back(arr[i]);
        
        for(int i=mid; i<arr.size(); i++)
            merge2.push_back(arr[i]);
        
        merge1 = mergesorted(merge1);
        merge2 = mergesorted(merge2);

        int i= 0, j = 0, k = 0;

        while(k < arr.size()) {
            if(i == merge1.size()) {
                arr[k++] = merge2[j++];
                continue;
            }
            if(j == merge2.size()) {
                arr[k++] = merge1[i++];
                continue;   
            }
            if(merge1[i] < merge2[j]) 
                arr[k++] = merge1[i++];
            else 
                arr[k++] = merge2[j++];
        }
        return arr;
    }
    
    vector<int> sortArray(vector<int>&nums) {
        return mergesorted(nums);
    }
};