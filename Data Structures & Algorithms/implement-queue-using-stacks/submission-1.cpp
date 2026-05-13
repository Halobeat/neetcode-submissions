class MyQueue {
public:
    stack<int> q1{};
    stack<int> q2{};

    MyQueue() {
        
    }
    
    void push(int x) {
        if (q1.empty() == true) {
            q1.push(x);
            return;
        }
        int temp{};
        while (!q1.empty()) {
            temp = q1.top();
            q2.push(temp);
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty()) {
            temp = q2.top();
            q1.push(temp);
            q2.pop();
        }
    }
    
    int pop() {
        int temp = q1.top();
        q1.pop();
        return temp;
    }
    
    int peek() {
        return q1.top();
    }
    
    bool empty() {
        return q1.empty();
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