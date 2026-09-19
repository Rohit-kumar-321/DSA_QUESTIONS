// class Solution {
// public:
// string reverseStr(string s, int k) {
//         int n = s.size() ;

//         for ( int i=0 ; i<n ; i+= 2*k){
//             int left = i ; 
//             int right = min(i+k-1 , n-1) ; 
//         while(left<right){
//          swap(s[left],s[right]) ; 
//          left++ , right-- ;
//         }
//         }
//         return s ;
// }
// };

class Solution {
public:
string reverseStr(string s, int k) {

 for ( int i=0 ; i<s.size() ; i++){
  int start=i , end = i+k-1 ; 

  if( end >= s.size()){
    end = s.size()-1 ; 
  }

  while( start <= end) {
  swap(s[start] , s[end]) ;
  start++ , end-- ; 
  }
  i = i + 2*k - 1; 
 }
 return s ; 
}
}; 
