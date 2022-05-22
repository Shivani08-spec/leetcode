class Solution {
public:
    int longestValidParentheses(string S) {
        stack<int> stack;
       stack.push(-1);
       int res = 0;
       for(int i=0;i<S.length();i++){
           if(S[i]=='('){
               stack.push(i);
           }
           else{
               stack.pop();
               if(!stack.empty()){
                   res = max(res, i-stack.top());
               }
               else{
                   stack.push(i);
               }
           }
       }
       return res;
    }
};