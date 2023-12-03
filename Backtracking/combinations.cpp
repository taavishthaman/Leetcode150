class Solution {
public:
    void find_combinations(vector<int> & v, int i, vector<vector<int>> & op, int n, int k) {
        if(i == n+1) {
            if(v.size() == k)
                op.push_back(v);
            return;
        }

        v.push_back(i);
        find_combinations(v, i+1, op, n, k);
        v.pop_back();
        find_combinations(v, i+1, op, n, k);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> op;
        vector<int> v;

        find_combinations(v, 1, op, n, k);

        return op;
    }
};