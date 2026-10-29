class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;

        for(const int& num : nums){
            freq[num]++;
        }

        vector<pair<int,int>> counts;
        for(auto& pair : freq ){
            counts.push_back({pair.second, pair.first});
        }

        sort(counts.rbegin(), counts.rend());
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(counts[i].second);
        }
        return result;
    }
};
