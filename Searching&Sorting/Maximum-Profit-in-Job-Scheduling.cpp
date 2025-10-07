//We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].
//You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.
//If you choose a job that ends at time X you will be able to start another job that starts at time X.

//soln:-

class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    int solve(vector<vector<int>>& helper, int i, vector<int>& dp) {
        if (i >= helper.size()) return 0;

        if (dp[i] != -1) return dp[i];

       
        int next = -1;
        int low = i + 1, high = helper.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (helper[mid][0] >= helper[i][1]) {
                next = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        int take = helper[i][2] + (next == -1 ? 0 : solve(helper, next, dp));
        int nottake = solve(helper, i + 1, dp);

        return dp[i] = max(take, nottake);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> helper;
        for (int i = 0; i < n; i++) {
            helper.push_back({startTime[i], endTime[i], profit[i]});
        }

        sort(helper.begin(), helper.end(), cmp);

        vector<int> dp(n + 1, -1);
        return solve(helper, 0, dp);
    }
};
