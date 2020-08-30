class Solution {
public:
    void helper(int n ,string s , string op , vector<string> &ans,map<int,string> mp){
        if(op.size() == n)
        {
            ans.push_back(op);
            return;
        }
        int dg = s[0]-'0';
        s.erase(s.begin()+0);
        for(int i=0;i<mp[dg].size();i++)
        {
            string op1 = op;
            op1+=mp[dg][i];
            helper(n,s,op1,ans,mp);
        }
        
        
    }
    vector<string> letterCombinations(string dd) {
        
        map<int, string> mp ;
        mp[2]="abc"; mp[3]="def";  mp[4]="ghi";  mp[5]="jkl"; 
         mp[6]="mno";  mp[7]="pqrs";  mp[8]="tuv";  mp[9]="wxyz";
          vector<string> ans;
        int n = dd.size();
        if(n==0) return ans;
      
        helper(n,dd,"",ans,mp);
        return ans;
    }
};