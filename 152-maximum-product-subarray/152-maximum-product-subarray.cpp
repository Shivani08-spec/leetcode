class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
          int maxi =1;
	    int mini = 1;
	    int ans =INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            swap(maxi,mini);
	        }
	        
	        maxi = max(arr[i],maxi*arr[i]);
	        mini = min(arr[i],mini*arr[i]);
	        
	        ans = max(maxi,ans);
	    }
	    
	    return ans;
    }
};