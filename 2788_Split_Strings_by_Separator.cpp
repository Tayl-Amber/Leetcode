class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        string temp;
        for(string word:words){
            for(char ch:word){
                if(ch != separator){
                    temp += ch;
                }else if(ch == separator && temp.size() != 0){
                    ans.push_back(temp);
                    temp = "";  
                }
            }
            if(temp.size()!=0){
                ans.push_back(temp);
                temp="";
            }
        }
        return ans;

    }
};
