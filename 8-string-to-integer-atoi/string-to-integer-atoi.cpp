class Solution {
public:
    int myAtoi(string s){
     int i = 0 ; 
        while(i < s.size() && s[i] == ' '){
            i++ ; 
        }
        int sign = 1 ; 
        if(i < s.size() && s[i] == '-'){
           sign = -1 ; 
            i++ ; 
        }
        else if(i < s.size() && s[i] == '+'){
            i++ ; 
        }

        long long ans = 0 ; 
         while ( i < s.size() && s[i] >= '0' && s[i]<='9'){
            int digit = s[i]-'0' ; 
            ans = ans*10 + digit ; 
            // Overflow
            if (sign == 1 && ans > 2147483647)
                return 2147483647;

            if (sign == -1 && ans > 2147483648LL)
                return -2147483648LL;

            i++ ;
        }
        return ans*sign ; 
    }
};