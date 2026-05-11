class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {

    }
    
    void push(int x) {
        if (empty()) {
            q1.push(x);
            return;
        } else {
            int temp = 0;
            while (!q1.empty()) {
                temp = q1.front();
                q2.push(temp);
                q1.pop();
            }
            q1.push(x);
            while (!q2.empty()) {
                temp = q2.front();
                q1.push(temp);
                q2.pop();
            }
        }
    }
    int pop() {
        if (!empty()) {
            int x = q1.front();
            q1.pop();
            return x;
        }
    }
    int top() {
        if (!empty()) {
            return q1.front();
        }
        return 0;
    }

    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */