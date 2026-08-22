class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1 ; 
         int count = 0 ; 
     // skip last gaps 
     while(n >= 0 && s[n] == ' '){
        n-- ;
     }
     // count last word 
         while( n >= 0 && s[n] != ' '){
            count++ ;
            n-- ;  
         }
         return count ; 
    }
};

// if in constrain its not given There will be at least one word in s then 
//   while (n >= 0 && s[n] == ' ')
//   while (n >= 0 && s[n] != ' ')  will come instead of that conditions 