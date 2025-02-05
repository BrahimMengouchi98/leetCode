class Solution {
public:

    bool isPrintable(char c)
    {
        return ((c >= 65 && c <= 90) ||
                (c >=  97 && c <= 122) || 
                (c >= 48 && c <= 57));
    }

    bool isPalindrome(string s)
    {
        int size = s.size();
        char* start = &s[0];
        char* end = &s[size - 1];

        while (start < end)
        {
            while (start < end && !isPrintable(*start))
                start++;
            while (start < end && !isPrintable(*end))
                end--;
            if (*start >= 65 && *start <= 90)
                *start += 32;
            if (*end >= 65 && *end <= 90)
                *end += 32;
            if (*start != *end)
                return false;
            start++;
            end--;
        }
        return true;
    }
};
