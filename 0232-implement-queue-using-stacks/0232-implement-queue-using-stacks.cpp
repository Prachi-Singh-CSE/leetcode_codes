class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    // recursion used 
    void pushAtBottom(int x) {
        
        if (s.empty()) {
            s.push(x);
            return;
        }
        
        
        int temp = s.top();
        s.pop();
        
        
        pushAtBottom(x);
        
       
        s.push(temp);
    }
    
    void push(int x) {
       
      pushAtBottom(x);
    }
    
    int pop() {
        if (!empty()) {
            int topValue = s.top();
            s.pop();
            return topValue;
        }else{
            return -1;
        }
    }
    
    int peek() {
       if(!empty()){
            return s.top();
       }else{
        return -1;
       }
    }
    
    bool empty() {
        return s.size() == 0;
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