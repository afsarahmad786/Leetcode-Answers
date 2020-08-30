string minWindow(string s, string t) {
        map<char,int> m1,m2;
        for(auto c:t)
            m1[c]++;
        string r="";
        int len=INT_MAX;
        int l=0,j=0;
        for(int i=0;i<s.length();i++) {
            if(m1.find(s[i])!=m1.end()) {
                m2[s[i]]++;
                if(m2[s[i]]==m1[s[i]])
                    l++;
            }
            while(l==m1.size()&&j<=i) {
                if(len>(i-j+1)) {
                r=s.substr(j,i-j+1);
                len = i-j+1;
                }
                if(m1.find(s[j])!=m1.end()) {
                    m2[s[j]]--;
                    if(m1[s[j]]>m2[s[j]])
                    l--;
                }
                j++;
            }
        }
        return r;
    }