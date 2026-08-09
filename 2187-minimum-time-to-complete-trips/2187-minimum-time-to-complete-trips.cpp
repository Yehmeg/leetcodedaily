class Solution {
public:

    bool check(long long mid, vector<int>& time, int totalTrips) {

        long long trips = 0;

        for (int t : time) {
            trips += mid / t;

            // No need to calculate further
            if (trips >= totalTrips)
                return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {

        long long lo = 1;

        int mn = INT_MAX;

        for (int t : time) {
            mn = min(mn, t);
        }

        long long hi = 1LL * mn * totalTrips;

        long long ans = hi;

        while (lo <= hi) {

            long long mid = lo + (hi - lo) / 2;

            if (check(mid, time, totalTrips)) {
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }

        return ans;
    }
};