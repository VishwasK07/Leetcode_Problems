class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;
        int lSum = 0;
        for (int i = 1; i <= n; i++) {
            lSum += i;
            int rSum = total - lSum + i;
            if (lSum == rSum) {
                return i;
            }
        }
        return -1;
    }
};