class NumArray {
public:
    vector<int> _nums, _nums2;
    NumArray(vector<int>& nums) : _nums(nums.size()) {

        _nums[0] = nums[0];
        _nums2 = nums;
        for (int i = 1; i < nums.size(); i++)
        {
            _nums[i] = _nums[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if (left - 1 >= 0)
            return  _nums[right] - _nums[left - 1];
        int sum = 0;
        for (int i = left; i <= right; i++)
        {
            sum += _nums2[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
