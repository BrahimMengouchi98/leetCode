class MinStack {
public:
    int stack[INT_MAX];
    int tp = -1;
    int min;
    MinStack() {
    }
    
    void push(int val) {
        if (val <= INT_MAX && val >= INT_MIN)
            stack[++tp] = val;
        else if (val > INT_MAX)
            stack[++tp] = INT_MAX;
        else
            stack[++tp] = INT_MIN;
        if (tp == 0)
            min = stack[tp];
        else 
        {
            if (stack[tp] < min)
                min = stack[tp];
        }
    }
    int getMin2()
    {
        int j = 0;
        int m = stack[0];
        while (++j <= tp - 1)
        {
            if (stack[j] < m)
                m = stack[j];
        }
        return m;
    }
    void pop() {
        if (tp > -1)
        {
            if (min == stack[tp])
                min = getMin2();
            tp--;
        }
    }
    
    int top() {
        return stack[tp];
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
