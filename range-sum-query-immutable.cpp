class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums)
    {
        int size = nums.size();
        sum.resize(size);
        sum[0] = nums[0];
        for (int i = 1; i < size; i++)
        {
            sum[i] = nums[i] + sum[i - 1];
        }
    }

    int sumRange(int left, int right) 
    {
        if (left != 0)
            return sum[right] - sum[left - 1];
        return sum[right];
    }
};
