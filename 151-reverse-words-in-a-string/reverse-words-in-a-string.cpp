// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.size()-1 ; 
//         string ans = "" ;

//         while( s[n] == ' '){
//             n-- ; 
//         }

//         int left = n , right = n ; 
//         while( right>=0) {
//           if(left >=0 && s[left] != ' '){     
//             left-- ; 
//           }
//           else{
//           for( int j= left+1 ; j<=right ; j++){
//             ans += s[j] ; 
//           }
//            ans += ' ' ;
//            right = left-1 ; 
//            while( right >=0 && s[right] == ' '){
//             right-- ;
//            }  
//             left = right ; 
//           }
//          }
//          ans.pop_back();  
//         return ans ; 
//     }
// };  

 

class Solution {
public:
    string reverseWords(string s) {
     int n = s.size() ; 
         
     int idx = 0 ;
     for( int i=0 ; i<n ; i++){
        if( s[i] != ' ' ){
            if(idx != 0){
                s[idx] = ' ' ;
                idx++ ;
            }
            while(i<n && s[i] != ' '){
                s[idx] = s[i] ;
                idx++ ;
                i++ ;
            }
        }
     }
     s.resize(idx) ;
     n = idx ;

     
  reverse(s.begin() , s.end()) ;
     int left = 0 , right = 0 , k=0 ;  
     while( k <= s.size() )
     {
        if(right<n && s[right] != ' '){
            right++ ; 
            k++ ; 
        }
        else{     
            int temp = right-1 ; 
           while(left<temp){
                swap(s[left], s[temp]) ;
                left++ ; 
                temp-- ; 
            }
            while(k<n && s[k] == ' '){
                k++ ; 
              
            }
            if(k == n)
               break;

           left = k ; 
           right = left ; 
        }
     }
     return s ; 
    }
}; 
        

// while( s[k] == ' '){
//          k++ ; 
//      }



// same sol jus try 
// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.size()-1 ; 
//     string ans = "" ; 
//      while ( s[n] == ' '){
//     n-- ; 
//    }
//  int left = n , right = n ; 
//  while(right>=0) {
//    if(left>=0 && s[left] != ' '){
//     left-- ; 
//    }
//    else{
//     for(int i=left+1 ; i<=right ; i++){
//         ans += s[i] ; 
//     }
//     ans += ' ' ; 
//     right = left-1 ; 
//         while(right>=0 && s[right] == ' ' ) {  // for more than one space
//             right-- ; 
//         } 
//         left = right ;   
//    }
//  }
//  ans.pop_back() ;   // remove last space ans += ' ' ;  that one 
//  return ans ; 
//  } 
//  };