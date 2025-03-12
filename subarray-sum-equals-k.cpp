class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count = 0, sum, i = -1;
        int l, r, size = arr.size();
        while (i++ < size)
        {
            l = i;
            sum = arr[l];
            if (sum == k)
                count++;
            if (l == size - 1)
                return count; 
            r = i;
            while (++r < size)
            {
                sum += arr[r];
                if (sum == k)
                    count++;
            }
        }
        return count;

    }
};
