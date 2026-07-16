class MinStack {
public:
    std::vector<pair<int , int>> pair;
    MinStack() {
        
    }
    
    void push(int val) {
        int last;
        if(!pair.empty()) {
            last = pair.back().second;
        }
        pair.push_back({val, min(val, pair.empty() ? val: last)});
    }
    
    void pop() {
        pair.pop_back();
    }
    
    int top() {
       return pair.back().first ;
    }
    
    int getMin() {
        return pair.back().second; 
    }
};
