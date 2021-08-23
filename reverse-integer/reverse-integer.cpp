class Solution {
public:
    int reverse(int x) {
        long long y = x;
        long long ans = 0;
        while( y != 0)
        {
            ans = (ans*10) + y%10;
            y = y/10;
        }
        
        if(ans > INT_MAX){
            return 0;
        }
        else if(ans<INT_MIN)
            return 0;
        
        else
            return ans;
        
    }
};