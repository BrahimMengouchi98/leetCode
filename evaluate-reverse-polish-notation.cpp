class Solution {
public:
    int stack[10000];
    int top = -1;
    void push(int val)
    {
        stack[++top] = val;
    }
    int pop()
    {
        return stack[top--];
    }
    int operation(int n1, int n2, char c)
    {
        switch (c)
        {
            case '+':
                return n1 + n2;
            case '-':
                 return n1 - n2;
            case '/':
                if (n2 == 0)
                    return 0;
                return n1 / n2;
            case '*':
                return n1 * n2;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        string opers = "+-/*";
        int pos, n1, n2;
        char c;
        for (int i = 0; i < tokens.size(); i++)
        {
            pos = opers.find(tokens[i]);
            if (pos != string::npos)
            {
                n2 = pop();
                n1 = pop();
                c = tokens[i][0];
                int res = operation(n2, n1, c);
                push(operation(n1, n2, c));
                continue;
            }
            push(stoi(tokens[i]));
        }
        return stack[0];
    }
};
