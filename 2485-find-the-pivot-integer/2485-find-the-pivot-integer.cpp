class Solution {
public:
    int pivotInteger(int n) {
        long long total = 1LL * n * (n + 1) / 2;
        int low = 1;
        int high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long square = 1LL * mid * mid;

            if (square == total) {
                return mid;
            } else if (square < total) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};