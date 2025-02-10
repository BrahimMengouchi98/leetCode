class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> ab;
        vector<vector<int>> aa;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int right, left, sum, leftt,rightt;
        for (int i = 0; i < size - 2; i++)
        {
            cout << "i: " << i << endl;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            left = i + 1;
            right = size - 1;
            while (left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    aa.push_back({nums[i], nums[left], nums[right]});
                    leftt = left;
                    rightt = right;
                    while (left < right && nums[leftt] == nums[left])
                        left++;
                    while (left < right && nums[rightt] == nums[right])
                        right--;
                }
                    else if (sum < 0)
                        left++;
                    else
                        right--;
            }
        }
        return aa;
    }
};
