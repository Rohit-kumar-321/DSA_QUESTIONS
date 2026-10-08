class Solution {
public:
    string minWindow(string s, string t) {   
                         // fisrt see greek question :Smallest distinct window
        string ans = "" ; 
        if(t.size() > s.size()){
            return ans ; 
        }

        int start = 0;
        int minLen = INT_MAX;
        int count = 0 ; 
        vector<int> map(256,0) ; 
        for( int i=0 ; i<t.size() ; i++){
            map[t[i]]++ ; 
            count ++ ; 
        }
      int left =0 , right=0 ; 
      while(right<s.size())
      {
        if(map[s[right]] > 0){   
         count-- ; 
        }
         map[s[right]]-- ;
        right++ ; 
        while(count == 0){
        if(right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }
          map[s[left]]++ ; 
         if(map[s[left]] > 0){
            count++ ; 
         }
         left++ ;
        }
      }
        if(minLen == INT_MAX)
            return "";
      return s.substr(start, minLen); ; 
    }
};