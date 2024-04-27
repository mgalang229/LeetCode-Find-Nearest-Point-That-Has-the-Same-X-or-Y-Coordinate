class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = INT_MAX, ans = -1;
        for (int i = 0; i < points.size(); i++) {
            if (x == points[i][0] || y == points[i][1]) {
                int dist = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (dist < mn) {
                    mn = dist;
                    ans = i;
                }
            }
        }
        return ans;
    }
};
