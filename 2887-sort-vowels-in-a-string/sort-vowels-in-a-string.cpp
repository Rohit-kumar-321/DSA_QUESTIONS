class Solution {
public:
    string sortVowels(string s) {
int n = s.size() ; 
vector<int>map1(26,0) ; 
vector<int>map2(26,0) ; 

for( int i=0 ; i<n ; i++){
  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
    map1[s[i]-'a']++ ; 
  }
  else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
    map2[s[i]-'A']++ ; 
  }
  }
  string vowel_order = "" ; 
  for(int i=0 ; i<26 ; i++){
    while(map2[i] > 0){
        int k = 'A'+ i ;
     vowel_order += k ;
     map2[i]-- ;  
    }
  }
    for(int i=0 ; i<26 ; i++){
    while(map1[i] > 0){
        int k = 'a'+ i ;
     vowel_order += k ; 
     map1[i]-- ; 
  }
    }
      int j=0 ; 
    for(int i=0 ; i<n ; i++){
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
        s[i] = vowel_order[j] ;
        j++ ; 
     }
    }
    return s ; 
}
}; 


// class Solution {
// public:
//  string sortVowels(string s) {
// int n = s.size() ; 
// vector<int>map1(128,0) ; 

// for( int i=0 ; i<n ; i++){
//   if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
//    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
//     map1[s[i]]++ ; 
//   }
//   }
//   string vowel_order = "" ; 
//   for(int i=0 ; i<128 ; i++){
//     while(map1[i] > 0){
//      vowel_order += i ;
//      map1[i]-- ;  
//     }
//   }
//       int j=0 ; 
//     for(int i=0 ; i<n ; i++){
//      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
//         s[i] = vowel_order[j] ;
//         j++ ; 
//      }
//     }
//     return s ; 
// }
// }; 


// class Solution {
// public:
//     bool isVowel(char c) {
//         string v = "aeiouAEIOU";
//         for (int i = 0; i < 10; i++) {
//             if (c == v[i])
//                 return true;
//         }
//         return false;
//     }

//     string sortVowels(string s) {
//         int n = s.size();
//         vector<int> map1(128, 0);

//         for (int i = 0; i < n; i++) {
//             if (isVowel(s[i])) {
//                 map1[s[i]]++;
//             }
//         }
//         string vowel_order = "";
//         for (int i = 0; i < 128; i++) {
//             while (map1[i] > 0) {
//                 vowel_order += char(i);
//                 map1[i]--;
//             }
//         }
//         int j = 0;
//         for (int i = 0; i < n; i++) {
//             if (isVowel(s[i])) {
//                 s[i] = vowel_order[j];
//                 j++;
//             }
//         }
//         return s;
//     }
// };