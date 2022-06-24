class Solution {
public:
    int ans =0;
    int countOdds(int low, int high) {
     
        if(low%2 !=0 && high%2!=0){
            ans = (high-low)/2 +1;
        }
        else if(low%2==0 && high%2==0){
            low = low+1;
            high = high-1;
            ans = (high-low)/2 +1;
        }
        else if(low%2==0 && high%2!=0){
            low = low+1;
             ans = (high-low)/2 +1;
        }
        else{
            high = high-1;
             ans = (high-low)/2 +1;
        }
            return ans;
    }
};