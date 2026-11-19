class Solution {
public:
    int strStr(string haystack, string needle) {
        char* ptr1 = &haystack[0];
        char* ptr2 = &needle[0];
        for(int i = 0; i<haystack.length();i++){
            int count = 0;
            ptr2 = &needle[0];
            ptr1 = &haystack[i];
            if(*ptr1 == *ptr2){
                    for(int j =0;j<needle.length();j++){
                         if(*ptr1 == *ptr2){
                            count++;
                            ptr1++;
                            ptr2++;
                         }
                         else{break;}
                        if(count == needle.length()){
                            return i;
                        }
                    }
            }
        }
        return -1;
    }
};