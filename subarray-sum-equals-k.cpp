class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int size = arr.size();
        int count = 0;
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = arr[i];
            if (sum == k)
                count++;
            for (int j = i + 1; j < size; j++)
            {
                sum += arr[j];
                if (sum == k)
                    count++;
            }
        }
        return count;
    }
};
