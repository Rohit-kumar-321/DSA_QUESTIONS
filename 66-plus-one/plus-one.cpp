// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size()-1 ; 
          
//          for( int i=n ; i>=0 ; i--){
//           if(digits[i] < 9){
//             digits[i]++ ; 
//             return digits ; 
//           }
//           digits[i] = 0 ; 
//          }
//         digits.insert(digits.begin(), 1);

//         return digits ; 
//     }
// };


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1 ; 

          int carry = 0 ; 
        for( int i=n ; i>=0 ; i--){
            int sum = digits[i] + 1  ; 

            digits[i] = sum %10 ; 
            carry = sum/10 ; 
            
            if( carry == 0){
              return digits ; 
            }
        }
        if(carry ==1){
            digits.insert(digits.begin(),1) ; 
        }
        return digits ; 
    }
}; 


// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size()-1 ; 

//           int carry = 1 ; 
//         for( int i=n ; i>=0 ; i--){
//             int sum = digits[i] + carry  ; 

//             digits[i] = sum %10 ; 
//             carry = sum/10 ; 
            
//             if( carry == 0){
//               return digits ; 
//             }
//         }
//         if(carry ==1){
//             digits.insert(digits.begin(),1) ; 
//         }
//         return digits ; 
//     }
// }; 