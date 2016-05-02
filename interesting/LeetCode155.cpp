/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/

class MinStack {
public:

    long long min;
    stack<long long> s;

    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(s.empty()){
            s.push(0);
            min=x;
        }
        else{
            s.push(min-x);
            if(min>x) min=x;
        }
    }
    
    void pop() {
        if(s.top()>0) min=min+s.top();
        s.pop();
    }
    
    int top() {
        if(s.top()>0) return min;
        else return min-s.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */