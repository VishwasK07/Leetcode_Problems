// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n && j-i<=k;j++){
//                 if(nums[i]==nums[j]){
//                     return true;
//                 }
//             }
            
//         }
//         return false;
        
//     }
// };

class Solution{
    public:
    bool containsNearbyDuplicate(vector<int> & nums,int k){
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                return true;
            }
            s.insert(nums[i]);
            if(s.size()>k){
                s.erase(nums[i-k]);
            }
        }
        return false;
    }
};