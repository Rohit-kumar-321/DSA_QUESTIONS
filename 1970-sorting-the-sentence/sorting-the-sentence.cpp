class Solution {
public:
    string sortSentence(string s) {
        int n = s.size() ;
        vector<string> ans(9);

        string word = "";

        for(int i = 0; i <= n ; i++) {
            if(i == n || s[i] == ' ') {
                
                int pos = word.back() - '0';
                word.pop_back();

                ans[pos - 1] = word;
                word = "";
            }
            else {
                word += s[i];
            }
        }

        string result = "";

        for(int i = 0; i < 9; i++) {
            if(ans[i] != "") {
                if(result != "") result += " ";
                result += ans[i];
            }
        }

        return result;
    }
};