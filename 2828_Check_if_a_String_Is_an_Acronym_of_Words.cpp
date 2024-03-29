class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
          if (s.length() != words.size()) {
        return false;
    }

    std::string acronym;
    for (const std::string& word : words) {
        acronym += word[0];
    }
    return acronym == s;
    }
};
