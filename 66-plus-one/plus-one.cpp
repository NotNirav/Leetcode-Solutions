class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l = digits.size() - 1;
        while(l>=0){
            if(l == 0 && digits[l]==9){
                digits[l]=0;
                digits.emplace(digits.begin(),1);
                return digits;
            }
            if(digits[l]==9){
                digits[l]=0;
                l = l-1;
                continue;
            }
            digits[l] = digits[l]+1;
            return digits;
        }
        return digits;
    }
};