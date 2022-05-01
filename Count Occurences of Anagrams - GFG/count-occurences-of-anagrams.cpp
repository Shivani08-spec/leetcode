// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Endshttps://www.pythonprogramming.in/find-frequency-of-each-word-from-a-text-file-using-nltk.html
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int c =0;
	    int K = pat.size();
	    int N = txt.size();
	    int start =0;
	    int end =0;
	    
	    if(txt.size()<pat.size())
	    return c;
	    
	    vector<int>phash(26,0);
	    vector<int>hash(26,0);
	    for(char ch: pat){
	        phash[ch-'a']++;
	    }
	    while(end<N){
	        hash[txt[end]-'a']++;
	        
	        if(end-start+1<K){
	            ++end;
	        }
	        else if(end-start+1 ==K){
	            if(phash==hash)
	            c++;
	            
	           if(hash[txt[start]-'a']!=0)
	           hash[txt[start]-'a']--;
	           
	           ++start;
	           ++end;
	        }
	    }
	    return c;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends