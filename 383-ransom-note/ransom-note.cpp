class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a = ransomNote.size() ; 
        int b = magazine.size() ; 
        vector<int>map(26,0) ; 

        for( int i=0 ; i<b ; i++){
          map[magazine[i] - 'a']++ ;
        }
        for( int i=0 ; i<a ; i++){
          map[ransomNote[i] - 'a']-- ;
        }
        for( int i=0 ; i<26 ; i++){
            if(map[i]<0){
                return false ;
            }
        }
        return true ;
    }
};

// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         int a = ransomNote.size();
//         int b = magazine.size();

//         vector<int> map(26, 0);

//         for (int i = 0; i < b; i++) {
//             map[magazine[i] - 'a']++;
//         }
//         for (int i = 0; i < a; i++) {
//             map[ransomNote[i] - 'a']--;

//             if(map[ransomNote[i] - 'a'] < 0){
//              return false ; 
//             }
//         }
//         return true;
//     }
// };