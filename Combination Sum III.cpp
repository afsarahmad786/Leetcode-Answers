class Solution {
public:
    void dfs(pair<int, string> p, int n, int k, vector<vector<int>>&v){
        if(p.second.size()==k && p.first==n){
            vector<int> vtr;
            for(auto c: p.second)
                vtr.push_back(c-'0');
            v.push_back(vtr);
            return;
        }
        if(p.second.size()==k || p.first>=n)
            return;
        int x = p.second.back()-'0';
        for(int i=x+1;i<=9;i++){
            dfs({p.first+i, p.second +char(i+'0')},n,k,v);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        pair<int, string> p;
        string s ="";
        vector<vector<int>> v;
        for(int i=1;i<=9;i++){
            dfs({i, s+char(i+'0')}, n, k, v);
        }
        return v;
    }
};