class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            long long hrs = 0;
            int mid = low + (high - low) / 2;
            for (int pile : piles) {
                hrs = hrs + (pile + 1LL * mid - 1) / mid;
            }
            if (hrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};