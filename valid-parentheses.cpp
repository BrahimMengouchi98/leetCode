class Solution {
public:
    int top = -1;
    char ss[10000];
    void push(char c)
    {
        ss[++top] = c;
        cout << ss[top] << endl;
    }
    char pop()
    {
        return ss[top--];
    }
    bool isValid(string s) {
        string open = "([{";
        string close = ")]}";
        int size = s.size();
        int j;
        push(s[0]);
        for (int i = 1; i < size; i++)
        {
            j = -1;
            while (++j < 3)
            {
                if (s[i] == close[j] && ss[top] == open[j])
                {
                    pop();
                    break;
                }
            }
            if (j > 2)
                push(s[i]);
        }
        if (top != -1)
            return false;
        return true;
    }
};
