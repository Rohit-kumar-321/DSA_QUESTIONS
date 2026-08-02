class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>map(26,0) ;

        for(int i=0 ; i<t.size() ; i++){
          map[t[i]-'a']++ ;
        }
        for(int i=0 ; i<s.size() ; i++){
            map[s[i]-'a']-- ; 
        }
        for( int i=0 ; i<26 ; i++){
            if(map[i] == 1){
                return i+'a' ; 
            }
        }
        return 0 ; 
    }
};


// vector<int> map(26, 0);

// for (int i = 0; i < s.size(); i++) {    // first s 
//     map[s[i] - 'a']++;
// }

// for (int i = 0; i < t.size(); i++) {
//     map[t[i] - 'a']--;

//     if (freq[t[i] - 'a'] < 0) {
//         return t[i];
//     }
// }