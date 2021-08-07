

void reverseString(char* s, int sSize){
    
 int l = 0;
 int r = sSize-1;
 char c;
 
 while(l<r)
 {
     // swap chars
     c = s[l];
     s[l] = s[r];
     s[r] = c;
     l++;
     r--;
 }
 
 printf("%s",s); 


}