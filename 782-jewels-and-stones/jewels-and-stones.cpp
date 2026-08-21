// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0 ;                 // o(n^2)
//        for( int i=0 ; i<jewels.size() ; i++){
//         for( int j=0 ; j<stones.size() ; j++){
//             if (jewels[i] == stones[j]){
//                 count++ ; 
//             } 
//                   }
//        } 
//         return count ; 
//     }
// };

        
// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0 ;  
//         vector<int> map1(128,0) ; 

//        for( int i=0 ; i<jewels.size() ; i++){
//           map1[jewels[i]] = 1 ;          
//        } 
//        for(int i=0 ; i<stones.size() ; i++){
//         if(map1[stones[i]] == 1){
//             count++ ; 
//         }
//        }
//         return count ; 
//     }
// };


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;  
        vector<int> map1(26,0) ; 
        vector<int> map2(26,0) ;

       for( int i=0 ; i<jewels.size() ; i++){
        if(jewels[i] >= 'a' && jewels[i] <= 'z'){
          map1[jewels[i] -'a'] = 1 ;
        }
        else{
            map2[jewels[i] - 'A'] = 1 ; 
        }

       } 
       for(int i=0 ; i<stones.size() ; i++){
        if(stones[i] >= 'a' && stones[i] <= 'z'){
        if(map1[stones[i]-'a'] == 1){
            count++ ; 
        }
        }
        else{
           if(map2[stones[i] -'A'] == 1){
            count++ ; 
           }
        }
       }
        return count ; 
    }
};


// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//      vector<int>map1(26,0) ;
//      vector<int>map2(26,0) ;
//          for(int i=0 ; i<jewels.size() ; i++){
//             if(jewels[i] >= 'a' && jewels[i] <= 'z'){
//             map1[jewels[i]-'a']++ ; 
//             }
//              else if(jewels[i] >= 'A' && jewels[i] <= 'Z'){
//                 map2[jewels[i] - 'A']++ ; 
//               }
//          }

//           int ans = 0 ; 
//          for(int i=0 ; i<stones.size() ; i++){
//             if(stones[i] >= 'a' && stones[i] <= 'z'){
//            if( map1[stones[i]-'a'] > 0 ) 
//            ans++ ; 
//             }
//               else if(stones[i] >= 'A' && stones[i] <= 'Z'){
//                if( map2[stones[i] - 'A'] > 0 ) 
//                ans++ ; 
//               }
//          }
//          return ans ; 
//     }
// }; 

