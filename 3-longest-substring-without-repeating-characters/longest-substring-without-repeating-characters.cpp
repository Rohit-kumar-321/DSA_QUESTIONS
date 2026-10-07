// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int ans = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 bool duplicate = false;
//                 for (int k = i; k < j; k++) {
//                     if (s[k] == s[j]) {
//                         duplicate = true;
//                         break;
//                     }
//                 }
//                 if (duplicate) {
//                     break;  // IMPORTANT
//                 }
//                 ans = max(ans, j - i + 1);
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int ans = 0;

//         for (int i = 0; i < n; i++) {
//             vector<int> freq(256, 0);

//             for (int j = i; j < n; j++) {
//                 if (freq[s[j]] == 1) {
//                     break;
//                 }
//                 freq[s[j]]++;
//                 ans = max(ans, j - i + 1);
//             }
//         }
//         return ans;
//     }
// };

// best 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
     int left=0 , right=0 ; 
      vector<int> map(256,0) ; 
    while( right< n) {
      if(map[s[right]] == 0){
        map[s[right]] = 1 ; 
        right++ ; 
      }
      else{
        map[s[left]]-- ; 
        left++ ; 
      }
      ans = max(ans,right-left) ; 
    }
    return ans ; 
    }
}; 
 

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int ans = 0;
//      int left=0 , right=0 ; 
//       vector<int> map(256,0) ; 
//    for( int i=0 ; i<n ; i++){
//       if(map[s[i]] == 0){
//         map[s[i]] = 1 ; 
//         right++ ; 
//       }
//       else{
//         while(map[s[i]] != 0){
//         map[s[left]]-- ; 
//         left++ ; 
//       }
//       map[s[i]] = 1 ; 
//       right++ ; 
//       }
//       ans = max(ans,right-left) ; 
//     }
//     return ans ; 
//     }
// }; 
 