class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
         int lis[n];
       for(int i=0;i<n;i++){
           lis[i]=1;
       }
     int j =0;int i =1;
     while(i<n){
     while(j<i){
         if(a[j]<a[i] && lis[i]<=lis[j]){
             lis[i]= 1+lis[i];
         }
         
         j++;
     }
     i++; 
     j=0;
     }
     
     int mx =0;
     for(int i=0;i<n;i++){
         if(lis[i]>mx){
             mx = lis[i];
         }
     }
     return mx;
//         int lis[n];
//         for(int i =0;i<n;i++){
//             lis[i]=1;
//         }
        
//         int   j=0,i=1;
//         while(i<n){
//             while(j<i){
//                 if(nums[j]<nums[i] && lis[j]<lis[j]){
                    
//                         lis[i]=  1+lis[j];
//                     }
                
//                 j++;
//             }
//             i++;
//             j=0;
//         }
//         int mx =0;
//      for(int i=0;i<n;i++){
//          if(lis[i]>mx){
//              mx = lis[i];
//          }
//      }
//      return mx;
    }
};