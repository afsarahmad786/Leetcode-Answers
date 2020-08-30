class Solution {
public:
    void backtrack(vector<vector<int>>& subsets, vector<int>& v, vector<int>& A, int ind)
{
    subsets.push_back(v);
    for(int i = ind; i<A.size(); i++)
    {
        if(i!=ind && A[i]==A[i-1])
            continue;
        v.push_back(A[i]);
        backtrack(subsets, v, A, i+1);
        v.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<int> v;
    vector<vector<int>> subsets;
    backtrack(subsets, v, A, 0);
    return subsets;
}};