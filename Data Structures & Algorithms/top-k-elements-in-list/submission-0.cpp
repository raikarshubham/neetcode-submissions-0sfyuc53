class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Count frequency
        for(int x : nums)
            mp[x]++;

        vector<pair<int,int>> freq;

        // Store (frequency, number)
        for(auto it : mp)
            freq.push_back({it.second, it.first});

        // Sort in descending order
        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for(int i=0;i<k;i++)
            ans.push_back(freq[i].second);

        return ans;
    }
};