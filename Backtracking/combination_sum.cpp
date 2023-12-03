#include <bits/stdc++.h>
using namespace std;

void find_combinatons(vector<int> & candidates, int target, vector<int> v, int i, vector<vector<int>> & op) {
    if(i == candidates.size()) {
        if(target == 0) {
            op.push_back(v);
        }
        return;
    }
    
    if(target - candidates[i] >= 0) {
        //Include the current element and find rest of the combinations
        v.push_back(candidates[i]);
        find_combinatons(candidates, target-candidates[i], v, i, op);
        //Do not include the current element and find the rest of the combinations
        v.pop_back();
        find_combinatons(candidates, target, v, i+1, op);
    } else {
        //If current element cannot be included just skip it and find if any possible combinations in rest of the array
        find_combinatons(candidates, target, v, i+1, op);
    }
    
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> op;
    vector<int> v;
    find_combinatons(candidates, target, v, 0, op);
    return op;
}

int main()
{
    vector<int> candidates = {8,7,4,3};
    int target = 11;
    vector<vector<int>> op = combinationSum(candidates, target);

    for(vector<int> v : op) {
        for(int num : v) {
            cout<<num<<", ";
        }
        cout<<endl;
    }
    return 0;
}
