class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ;
      // not optimal nl0gn 
       vector<int> ans ;
       for( int i=0 ; i<n-1 ; i++){
        for(int j=nums[i]+1 ; j<nums[i+1] ; j++){
           ans.push_back(j) ;
       }
       }
       return ans ; 
    }
};
// sort(nums.begin(), nums.end());
// vector<int> ans;
// for (int i = 0; i < nums.size() - 1; i++) {
//     int current = nums[i] + 1;
//     while (current < nums[i + 1]) {
//         ans.push_back(current);
//         current++;
//     }
// }


// // optimal but not valid for bigger constraint O(N) , o(1) 
// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         int n = nums.size() ; 
       
//        int smallest = INT_MAX ,  maxi = INT_MIN ; 
//         for( int i=0 ; i<n ; i++){
//           smallest = min(smallest,nums[i]) ;
//            maxi =  max(maxi , nums[i] ) ;
//         }
//         vector<int> map(101,0) ;
//         for(int i=0 ; i<n ; i++){
//             map[nums[i]] = 1 ;
//         }
//         vector<int> ans ;
//         for(int i=smallest ; i<maxi ; i++){
//             if(map[i] != 1) {
//                 ans.push_back(i) ;
//             }
//         }
//         return ans ; 
//     }
// };


// // optimal for bigger range also o(n) , o(n) time and space 
// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         int n = nums.size() ; 
       
//        int smallest = INT_MAX ,  maxi = INT_MIN ; 
//         for( int i=0 ; i<n ; i++){
//           smallest = min(smallest,nums[i]) ;
//            maxi =  max(maxi , nums[i] ) ;
//         }
//         unordered_set<int> map ;

//         for( int i=0 ; i<n ; i++){
//             map.insert(nums[i]) ;
//         }
//     vector<int> ans ; 
//     for(int i=smallest+1 ; i<maxi ; i++){
//         if(map.contains(i) == 0){
//             ans.push_back(i) ;
//         }
//     }
//     return ans ;
//     }
// };

// // Current complexity:
// // O(n+k)
// // Suggested complexity:
// // O(NlogN)
// // Suggestions:
// // Your approach is optimal for small ranges. For larger ranges, sorting would be more space-efficient.
 