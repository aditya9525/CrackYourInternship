class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int lsatDigit=0;
        while(x!=0){
            lsatDigit=x%10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+lsatDigit;
            x=x/10;
        }
        return ans;
    }
};
