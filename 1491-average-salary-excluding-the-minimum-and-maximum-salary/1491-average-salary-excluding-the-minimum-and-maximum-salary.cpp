class Solution {
public:
    double average(vector<int>& salary) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int len = salary.size();
        
        for(int i=0;i<len;i++){
            if(salary[i]<mini){
                mini = salary[i]; 
            }
            if(salary[i]>maxi){
                maxi= salary[i];
            }
        }
        
        double sal=0;
        for(int i=0;i<len;i++){
           
                sal = sal+salary[i];
            
        }
        len = len-2;
        sal = sal-maxi-mini;
        sal = sal/len;
        return sal;
    }
};