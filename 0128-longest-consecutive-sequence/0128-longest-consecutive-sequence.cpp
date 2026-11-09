// Brute force
//  class Solution {
//  public:
//      bool linearSearch(vector < int > &arr, int num) {
//          for (int i = 0; i < arr.size(); i++) {
//              if (arr[i] == num) {
//                  return true;
//              }
//          }
//          return false;
//      }
//      int longestConsecutive(vector<int>& nums) {
//          int longest = 1;
//          for (int i = 0; i < arr.size(); i++) {
//              int x = arr[i];
//              int cnt = 1;
//              while (linearSearch(arr, x + 1)) {
//                  x = x + 1;
//                  cnt++;
//              }
//              longest = max(longest, cnt);
//          }
//          return longest;
//      }
//  };
// Better approach
// class Solution {
//  public:
//      int longestConsecutive(vector<int>& nums) {

//         if (nums.size() == 0)
//             return 0;

//         sort(nums.begin(), nums.end());

//         int longest = 1;
//         int cnt = 0;
//         int lastSmaller = INT_MIN;

//         for (int i = 0; i < nums.size(); i++) {

//             if (nums[i] - 1 == lastSmaller) {
//                 cnt++;
//                 lastSmaller = nums[i];
//             }

//             else if (nums[i] != lastSmaller) {
//                 cnt = 1;
//                 lastSmaller = nums[i];
//             }

//             longest = max(longest, cnt);
//         }

//         return longest;
//     }
// };
// Optimal Approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        int longest = 1;

        for (auto it : st) {

            if (st.find(it - 1) == st.end()) {

                int cnt = 1;
                int x = it;

                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};