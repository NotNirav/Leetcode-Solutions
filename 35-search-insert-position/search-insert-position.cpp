class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int big = nums.size();
        int small = 0;
        int middle = big/2;
        while(small<big){
            if(nums[middle]<target){
                small = middle+1;
                middle = (small + big)/2;
            }
            else if(nums[middle]>target){
                big = middle;
                middle = (small + big)/2;
            }
            else {
                return middle;
            }
        }
        return small;
    }
};