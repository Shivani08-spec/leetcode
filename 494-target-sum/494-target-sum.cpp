class Solution {
public:
   
        int countSubsetWithGivenSum(vector <int> nums, int sum){
        int n=nums.size();
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int j=1;j<=sum;j++)
            dp[0][j]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector <int> &nums, int diff) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
 // Target Sum = Difference of two subsets = {S1} - {S2}
// Given: Target Sum = x
// S1+S2=sum (sum of 2 subsets)
// S1-S2=x (diff of 2 subsets)
// 2*S2=sum-x
// S2=(sum-x)/2


        int twice_s2=sum-diff;
        //since, we have to divide twice_s2/2, if it is odd, then its not possible
        if(twice_s2%2==1 || twice_s2<0) 
            return 0;
        int s2=twice_s2/2;
        return countSubsetWithGivenSum(nums,s2);
        
    }
};