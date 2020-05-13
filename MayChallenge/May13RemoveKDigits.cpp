class Solution {
    const long INF = 1e8;
public:
    string removeKdigits(string num, int k) {
        string str="";
        stack<char> stack;
        int size=num.size();
        int szk=size-k;
        if(num.size()<=k)
            return "0";
        for(char c :num)
        {
            // conrinue cicle to remove greater digits
            while(k>0 && !stack.empty() &&  stack.top()>c)
            {
                k--;
                stack.pop();
                
            }
            stack.push(c);
        }
        while(k>0)
        {
            stack.pop();
            k--;
        }
        while(!stack.empty())
        {
           str+=stack.top();
               stack.pop();
        }
        reverse(str.begin(),str.end());
        //remove leading zero
        while(str[0]=='0')
            str=str.substr(1,string::npos);
        if(str=="")
            return "0";
        
        return str;
    }
};