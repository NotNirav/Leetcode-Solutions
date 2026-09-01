class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<size(nums);j++){
                if(i!=j){int a,b,d;
                    a = nums[i];
                    b = nums[j];
                    d = a+b;
                    if(d==target){vector<int> c = {i,j};
                    return c;}
                }
            }
        }
        return{};
    }
};