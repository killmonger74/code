class Solution {
    const int INF = 1e9 + 5;
public:
    int maxProfit(vector<int>& prices) {
        int best_without = 0, best_with = -INF;
        for(int x : prices) {
            best_with = max(best_with, best_without - x);
            best_without = max(best_without, best_with + x);
        }
        return best_without;
    }
};
