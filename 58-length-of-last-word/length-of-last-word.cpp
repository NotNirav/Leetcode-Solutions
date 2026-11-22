class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length() - 1;
        int count = 0;
        while(true){
            if(s[l] == 32){
                l = l-1;
            }
            else{break;}
        }
        while(l>=0){
            if(s[l] == 32){
                break;
            }
            l = l-1;
            count++;
        }
        return count;
    }
};