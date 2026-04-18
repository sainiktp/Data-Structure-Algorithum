class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int s : salary) {
            sum += s;
            maxi = max(maxi, s);
            mini = min(mini, s);
        }

        int n = maxi;  // max
        int m = mini;  // min

        return (double)(sum - n - m) / (salary.size() - 2);
    }
};