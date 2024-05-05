class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int, int> countMap;
    unordered_set<int> occurrences;

    for (int num : arr) {
        countMap[num]++;
    }

    for (const auto& pair : countMap) {
        occurrences.insert(pair.second);
    }

    return countMap.size() == occurrences.size();
    }
};