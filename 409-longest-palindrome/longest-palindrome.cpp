// class Solution {
// public:
//     int longestPalindrome(string s) {
//         int n = s.size() ;
//          vector<int> lower(26,0) ;
//          vector<int> upper(26,0) ;
              
//          for(int i=0 ; i<n ; i++){
//             if(s[i] >= 'a')
//             {
//             lower[s[i]-'a']++ ; 
//            }
//          else{
//             upper[s[i]-'A']++ ; 
//          }
//          }

//         int ans = 0 ;
//         int odd = false ; 

//          for(int i=0 ; i<26 ; i++){
//             if(lower[i]%2 == 0 ) {
//                 ans += lower[i] ;  
//             }
//             else{
//                 ans += lower[i]-1 ;
//                  odd = true ;
//             }

//             if( upper[i] % 2 == 0){
//                 ans += upper[i] ; 
//             }
//             else{
//                 ans += upper[i]-1 ; 
//                 odd = true ;
//             }
//             }
//             if(odd == true ){
//                 ans = ans+1 ;
//          }
//          return ans ; 
//     }
// };


class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size() ;
        vector<int> count(52, 0) ;

        for(int i=0 ; i<n ; i++){
            if(s[i] >= 'a'){
                count[s[i]-'a']++ ;
            }
            else{
                count[26 + s[i]-'A']++ ;
            }
        }

        int ans = 0 ;
        int Odd = false ;

        for(int i=0 ; i<52 ; i++){
            if(count[i] % 2 == 0){
                ans += count[i] ;
            }
            else{
                ans += count[i] - 1 ;
                Odd = true ;
            }
        }
        if(Odd == true){
            ans += 1 ;
        }
        return ans ;
    }
};