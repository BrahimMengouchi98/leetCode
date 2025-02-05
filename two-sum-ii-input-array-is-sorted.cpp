class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ab;
        int size = numbers.size();
        int left = 0;
        int right = size - 1;
        int sum;
        while (left < right)
        {
            sum = numbers[left] + numbers[right];
            if (sum == target)
            {
                ab.push_back(left + 1);
                ab.push_back(right + 1);
                return ab;
            }
            else if (sum > target)
                right--;
            else
                left++;
        }
        return ab;
    }
};
