class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() ;

        vector<int> map(26,0) ;
        for( int i=0 ; i<n ; i++){
            map[word[i]-'a']++ ;
        }
        // shortt the frequency in reverse max fre to lowest 
        sort(map.rbegin() , map.rend()) ;
        
        int push = 0 ;
        for(int i=0 ; i<26 ; i++){
            int freq = map[i] ; 
            
          push = push + (i/8 + 1) * freq ;
        }
        return push ; 
    }
};