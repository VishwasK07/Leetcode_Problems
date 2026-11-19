// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//         int count1 = 0;
//         int count2 = 0;
//         int ele1 = 0;
//         int ele2 = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (count1 == 0 && nums[i] != ele2) {
//                 count1 = 1;
//                 ele1 = nums[i];
//             } else if (count2 == 0 && nums[i] != ele1) {
//                 count2 = 1;
//                 ele2 = nums[i];
//             } else if (nums[i] == ele1) {
//                 count1++;
//             } else if (nums[i] == ele2) {
//                 count2++;
//             } else {
//                 count1--;
//                 count2--;
//             }
//         }
//         count1 = 0;
//         count2 = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == ele1) {
//                 count1++;
//             } else if (nums[i] == ele2) {
//                 count2++;
//             }
//         }

//         int mm = nums.size() / 3;

//         if (count1 > mm) {
//             ans.push_back(ele1);
//         }
//         if (count2 > mm) {
//             ans.push_back(ele2);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {

//         int n = nums.size();
//         int mm = (n / 3) + 1;

//         map<int, int> mpp;
//         vector<int> ls;

//         for (int i = 0; i < n; i++) {
//             mpp[nums[i]]++;

//             if (mpp[nums[i]] == mm) {
//                 ls.push_back(nums[i]);
//             }
//         }

//         return ls;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ls;
        for (int i = 0; i < n; i++) {
            if (ls.size() == 0 || ls[0] != nums[i]) {
                int cnt = 0;
                for (int j = 0; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        cnt++;
                    }
                }
                if (cnt > n / 3) {
                    ls.push_back(nums[i]);
                }
                if (ls.size() == 2)
                    break;
            }
            
        }
        return ls;
    }
};
