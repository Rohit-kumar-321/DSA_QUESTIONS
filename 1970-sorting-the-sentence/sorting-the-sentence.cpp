class Solution {
public:
    string sortSentence(string s) {

int n = s.size() ; 
vector<string> ans(10) ;
string word = "";
for( int i=0 ; i<=n ; i++){
   if(i==n || s[i] == ' ' ){
    int pos = word[word.size()-1]-'0' ;
        word.pop_back() ;
        ans[pos] = word ;
        word = "" ;
    }
    else{
        word = word+s[i] ; 
    }
}
string result = "" ;
for( int i=1 ; i<=9 ; i++){
   if( ans[i] != "" ){
    if(result != "")
        result = result + " " ; 
    result += ans[i] ;  
}
}
return result ;
}
};