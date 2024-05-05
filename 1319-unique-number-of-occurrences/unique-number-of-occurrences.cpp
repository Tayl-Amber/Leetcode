class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int, int> countMap;
    unordered_set<int> occurrences;

    // Count occurrences of each value in the array
    for (int num : arr) {
        countMap[num]++;
    }

    // Store the counts in a set
    for (const auto& pair : countMap) {
        occurrences.insert(pair.second);
    }

    // Check if the number of occurrences is unique
    return countMap.size() == occurrences.size();
    }
};