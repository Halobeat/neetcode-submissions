class MyQueue {
public:
    stack<int>stk1;
    stack<int>stk2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!stk1.empty()){
            int k=stk1.top();
            stk1.pop();
            stk2.push(k);
        }
        stk1.push(x);
        while(!stk2.empty()){
            int k=stk2.top();
            stk2.pop();
            stk1.push(k);
        }
    }
    
    int pop() {
        int k=stk1.top();
        stk1.pop();
        return k;
    }
    
    int peek() {
        return stk1.top();
    }
    
    bool empty() {
        return stk1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */