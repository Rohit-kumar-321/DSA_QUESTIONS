class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
         unordered_map<string, vector<string>> mp;

      for( int i=0 ; i<n ; i++){
        vector<int> map1(26,0) ;
        for(int j=0 ; j<strs[i].size() ; j++){
        map1[strs[i][j]-'a']++ ; 
      }
      string key ; 
        for( int i=0 ; i<26 ; i++){
         key += "#" ;
         key += to_string(map1[i]) ;
        }
         mp[key].push_back(strs[i]);
        }
         vector<vector<string>> ans;

        unordered_map<string, vector<string>>::iterator it;

        for (it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }

        return ans;
    }
};