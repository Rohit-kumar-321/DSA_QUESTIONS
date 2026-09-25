class Solution {
public:
    string addStrings(string num1, string num2) {
       int n1 = num1.size()-1 ; 
       int n2 = num2.size()-1 ; 

       int carry = 0 ;
       string ans = "" ;

       while( n1>=0 || n2>=0 || carry ){
       int sum = carry ; 
         if(n1>=0){
            sum += num1[n1] - '0' ; 
            n1-- ;
         }
         if(n2>=0){
            sum += num2[n2] - '0' ; 
            n2-- ; 
         }
          ans += (sum%10) + '0' ; 
          carry = sum/10 ; 
       }
       reverse(ans.begin() , ans.end()) ; 
       return ans ; 
    }
}; 


// class Solution {
// public:
//     string addStrings(string num1, string num2) {

//         int n1 = num1.size() - 1;
//         int n2 = num2.size() - 1;

//         // Make num1 the longer string
//         if (n1 < n2) {
//             swap(num1, num2);
//             swap(n1, n2);
//         }

//         string final_ans = "";
//         int carry = 0;

//         // Add digits while both strings have digits
//         while (n2 >= 0) {
//             int sum = (num1[n1] - '0') +
//                       (num2[n2] - '0') +
//                       carry;

//             final_ans += (sum % 10) + '0';
//             carry = sum / 10;

//             n1--;
//             n2--;
//         }

//         // Process remaining digits of num1
//         while (n1 >= 0) {
//             int sum = (num1[n1] - '0') + carry;

//             final_ans += (sum % 10) + '0';
//             carry = sum / 10;

//             n1--;
//         }

//         // If carry is still left
//         if (carry) {
//             final_ans += carry + '0';
//         }

//         reverse(final_ans.begin(), final_ans.end());

//         return final_ans;
//     }
// };