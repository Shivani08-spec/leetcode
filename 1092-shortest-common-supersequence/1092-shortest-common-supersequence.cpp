class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
          int m = str1.length();
        int n= str2.length();
        int t[m+1][n+1];
        string s = "";
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0){
                    t[i][j]=0;
                }
                         else if(str1[i-1]==str2[j-1]){
                             t[i][j]= t[i-1][j-1]+1;
                         }
                         else{
                             t[i][j] = max(t[i-1][j],t[i][j-1]);
                         }
            }
        }
       int i = m;
       int j = n;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                s.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(t[i-1][j]>=t[i][j-1]){
                s.push_back(str1[i-1]);
                i--;
            }
            else if(t[i][j-1]>t[i-1][j]){
                s.push_back(str2[j-1]);
                j--;
            }
        }
        while(i>0){
           s.push_back(str1[i-1]);
             i--;
         }
         while(j>0){
             s.push_back(str2[j-1]);
             j--;
        
         }
        reverse(s.begin(),s.end());
        return s;
    }
    
};