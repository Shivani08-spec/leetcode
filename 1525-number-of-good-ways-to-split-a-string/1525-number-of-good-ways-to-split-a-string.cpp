class Solution {
public:
    int numSplits(string s) {
        map<char,int>mp;
        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        int lc =0;
        int rc =0;
        int result=0;
        int n = mp.size();
        unordered_set<char>st;
        
        int i = 0;
        while(i<s.size()){
            st.insert(s[i]);
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            if(mp.size()<n){
                lc++;
                n = mp.size();
            }
            rc = n;
            i++;
            lc = st.size();
             if(lc==rc){
                result++;
            }
        }
        return result;
    }
};