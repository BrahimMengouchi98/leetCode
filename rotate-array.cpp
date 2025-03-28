class Solution {
public:
    
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> tmp(n);
        int j = -1;
        
        // handle case when k > n
        k %= n;
        for (int i = n - k; i < n; i++)
            tmp[++j] = nums[i];
        for (int i = 0; i < n - k; i++)
            tmp[++j] = nums[i];
        for (int i = 0; i < n; i++)
            nums[i] = tmp[i];
    }
};
