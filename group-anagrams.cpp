class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> vec;
        vector<string> v;
        unordered_map<string, vector<string>> mp;
        string ss;
        for (int i = 0; i < strs.size(); i++)
        {
            ss = strs[i];
            sort(ss.begin(), ss.end());
            mp[ss].push_back(strs[i]);
        }
        
        for (auto pair : mp) 
        {
            for (auto word : pair.second) {
                v.push_back(word);
            }
            vec.push_back(v);
            v.clear();
        }
        return vec;
    }
};
