class Solution {
public:
    string reverseWords(string s) {
        int n = s.size()-1 ; 
        string ans = "" ;

        while( s[n] == ' '){
            n-- ; 
        }
        
        int left = n , right = n ; 
        while( right>=0) {
          if(left >=0 && s[left] != ' '){     
            left-- ; 
          }
          else{
          for( int j= left+1 ; j<=right ; j++){
            ans += s[j] ; 
          }
           ans += ' ' ;
           right = left-1 ; 
           while( right >=0 && s[right] == ' '){
            right-- ;
           }  
            left = right ; 
          }
         }
         ans.pop_back();  
        return ans ; 
    }
};
