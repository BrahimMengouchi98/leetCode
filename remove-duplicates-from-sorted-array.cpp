class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int j = 1;
        for (int i = 1; i < s; i++)
        {
            while (i < s && nums[j - 1] == nums[i])
                i++;
            if (i < s)
                nums[j++] = nums[i];
        }
        return j;
    }
};
