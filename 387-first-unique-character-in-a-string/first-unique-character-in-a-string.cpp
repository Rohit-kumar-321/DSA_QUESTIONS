class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size()  ;
         vector<int>map(26,0) ;

        for( int i=0 ; i<n ; i++){
            map[s[i]-'a']++ ;
        }
        for( int i=0 ; i<n ; i++){
            if(map[s[i] - 'a'] == 1){
                return i ;
            }
        }
        return -1 ; 
    }
};

//we need the first character whose frequency is 1.