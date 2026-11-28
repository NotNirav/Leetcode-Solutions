class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        while(i<m && j<n){
            if(nums2[j]>nums1[i]){
                i++;
            }
            else{
                nums1.insert(nums1.begin() + i , nums2[j]);
                nums1.pop_back();
                i++;
                j++;
                m++;
            }
        }
        while(j<n){
            nums1[i++] = nums2[j++];
        }
    }
};