class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<pair<int,int>>p;
    unordered_map<int,int>m;
    vector<int>v;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        p.push_back({it->second,it->first});
    }
    sort(p.begin(),p.end());
    int x=p.size()-1;
    while(k--){
        v.push_back(p[x--].second);
    }
    return v;
}

};