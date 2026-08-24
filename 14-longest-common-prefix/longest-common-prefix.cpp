class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size() ;  // strs.size() = 2 in 1st example 
        string ans = "" ;  
       for( int i=0 ; i<strs[0].size() ; i++){
          for( int j=1 ; j<n ; j++){  // j=1 flow , j=2 flight  
           if(strs[0][i] != strs[j][i] ) {
            return ans ; 
           }
          }
           ans += strs[0][i] ; 
          }
          return ans ; 
    }
};