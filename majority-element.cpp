class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size(), j;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++)
        {
            j = i - 1;
            while (++j < size && nums[j] == nums[i]);

            if (j > size / 2)
                return nums[i];
            i = j;
        }
        return 0;
    }
};
