class Solution {
public:
    int calculate(string s) {
        if(s.empty())
        {
            return 0;
        }
        char sign='+';
        stack<int> stack;
        int res{0},i{0};
        long temp{0};
        for(auto &c:s)
        {
            i++;
            if(isdigit(c))
            {
                temp=10*temp+c-'0';// the 10* is in case the digit is bigger than 9 so we can keep track of it.
            }
            if(!isdigit(c) and c!=' ' or i == s.size() )//i==s.size() is used in cased there is no space towards the end and the last character is a digit
            {
                if(sign=='+')
                {
                    stack.push(temp);
                }
                else if(sign =='-')
                {
                    stack.push(-temp);
                }
                else
                {   int num{0};
                    if(sign=='*')
                    {
                        num=stack.top()*temp;
                    }
                    else
                    {
                        num=stack.top()/temp;
                    }
                    stack.pop();
                    stack.push(num);
                }
                sign=c;//i honestlt only care about the +,-,/ or * operations here.no need of an extra stack
                temp=0;
            }
        }
        while(!stack.empty())
        {
            res+=stack.top();
            stack.pop();
        }
        return res;
    }
};