class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()<b.length()){
            swap(a,b);
        }
        int la = a.length();
        int lb = b.length();
        int carry=0;
        int diff = la - lb;

            for(int y = lb-1;y>=0;y--){
                int x = y+diff;
                if(a[x] == '0'){
                    if(b[y]=='1'){
                        a[x]='1';
                        continue;
                    }
                }
                if(a[x] == '1'){
                    if(b[y]=='1'){
                        if(carry == 1){}
                        else{
                        a[x]='0';
                        carry++;
                        }
                    if(x>0 && a[x-1]=='0'){
                        a[x-1]='1';
                        carry--;
                    }
                    else if(y>0 && b[y-1]=='0'){
                        b[y-1]='1';
                        carry--;
                    }
                    }
                }
            }
        for (int x = diff - 1; x >= 0 && carry == 1; x--) {
            if (a[x] == '0') {
                a[x] = '1';
                carry = 0;
            } else {
                a[x] = '0';
            }
        }

        if(carry == 1){
            a = "1" + a;
        }
        return a;
    }
};