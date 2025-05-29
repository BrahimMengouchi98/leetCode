class NumArray {
public:
    vector<int> _nums;
    vector<int> sums;
    NumArray(vector<int>& nums) : _nums(nums) 
    {
        int size = _nums.size();
        int sum = 0;
        sums.resize(size);
        for (int i = 0; i < size; i++)
        {
            sum += _nums[i];
            sums[i] = sum;
        }
    }

    int sumRange(int left, int right) {
        if (left == 0)
            return sums[right];
        return sums[right] - sums[left - 1];
    }
};
