class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
          int n = words.size() ;
          
          vector<int> map1 (26,0) ;
       for( int i=0 ; i<words[0].size() ;i++){
          map1[words[0][i]-'a']++ ;
       }

       for( int i=1 ;i<n ;i++){
        vector<int> map2 (26,0) ;

          for( int j=0 ; j<words[i].size() ; j++){
            map2[words[i][j]-'a']++ ; 
         }

         for( int i=0 ; i<26 ; i++){
            map1[i] = min(map1[i] , map2[i]) ;
          }
       }

     vector<string> ans ; 

     for( int i=0 ; i<26 ; i++){
        while(map1[i]>0){
            string ansx = "" ;
             ansx += i +'a' ; 
            
            ans.push_back(ansx) ;
            map1[i]-- ; 
        }
     }
     return ans ;        
    }
};
      
// vector<string> ans;
// for (int i = 0; i < 26; i++) {
//     for (int j = 0; j < map1[i]; j++) {
//         string temp = "";
//         temp += (i + 'a');
//         ans.push_back(temp);
//     }
// }
// return ans;


// class Solution {
// public:
//     vector<string> commonChars(vector<string>& words) {

//         int n = words.size();

//         vector<int> map1(26, 0);

//         // Count characters of first word
//         for (char c : words[0]) {
//             map1[c - 'a']++;
//         }

//         // Compare with remaining words
//         for (int i = 1; i < n; i++) {

//             vector<int> map2(26, 0);

//             // Count characters of current word
//             for (char c : words[i]) {
//                 map2[c - 'a']++;
//             }

//             // Keep minimum frequency
//             for (int j = 0; j < 26; j++) {
//                 map1[j] = min(map1[j], map2[j]);
//             }
//         }

//         vector<string> ans;

//         // Build answer
//         for (int i = 0; i < 26; i++) {

//             while (map1[i] > 0) {

//                 string temp = "";
//                 temp += (i + 'a');

//                 ans.push_back(temp);

//                 map1[i]--;
//             }
//         }

//         return ans;
//     }
// };