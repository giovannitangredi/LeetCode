class StockSpanner {
    
public:
    stack<pair<int,int>> span;
    StockSpanner() {
        span=stack<pair<int,int>>();
    }
    
    int next(int price) {
        int ans=1;
       while(!span.empty() && span.top().first<=price)
       {
           pair<int,int>p= span.top();
           ans+=p.second;
           span.pop();
       }
        span.push(make_pair(price,ans));
        return span.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */