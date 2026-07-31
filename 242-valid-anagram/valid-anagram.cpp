// class Solution {
// public:
//     bool isAnagram(string s, string t) {

   //  by sorting O(NlogN) 
//          int a = s.size() ;
//          int b = t.size() ;
//         if( a != b){     
//             return false ;
//         }
//         sort(s.begin(),s.end()) ;
//         sort(t.begin(),t.end()) ;

//         if(s == t){
//             return true ;
//         }
//         return false ;
//      }
// };


class Solution {
public:
    bool isAnagram(string s, string t) {   // O(n) tme
         if(s.size() != t.size()){
            return false ;
         }
        vector<int> hashtable(26,0) ;
          
         // First loop counts characters of s.
        for( int i=0 ; i<s.size() ; i++){
            hashtable[ s[i]-'a' ]++ ;   // multiple time char aaa
        }
        // Second loop removes the characters of t hashtable fill and then empty
        for(int i=0 ; i<t.size() ; i++){
            hashtable[ t[i]-'a' ]-- ;
        }
  // If both strings are anagrams every count becomes 0.
       for(int i=0 ; i<26 ; i++){
        if(hashtable[i] != 0){
          return false ;
        }
       }
       return true ;
    }
};