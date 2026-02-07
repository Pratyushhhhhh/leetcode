class MinStack {
public:
    vector<pair<int,int>>s;
    MinStack() { }
    
    void push(int val) {
        if(s.empty()){
            s.push_back({val,val});
        }
        else
            s.push_back({val,min(s.back().second, val)});
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back().first;
    }
    
    int getMin() {
        return s.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 //ENCODED METHOD 
 class MinStack {
public:
    vector<long long> s;
    long long min;
    MinStack() { }
    
    void push(int val) {
        if(s.empty()){
            min=val;
            s.push_back(val);
        }
        else if(val>min)
            s.push_back(val);
        else{
            s.push_back(2LL *val - min);
            min=val;

        }
    }
    
    void pop() {
        if(s.empty()) return;
        long long x =s.back();
        s.pop_back();
        if(x<min)
        min=2*min-x;
    }
    
    int top() {
        if(s.empty()) return{};
        long long x = s.back();
        if(x<min)
            return min;
        return x;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */