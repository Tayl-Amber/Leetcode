class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       int total_apple = 0;
       int count = 0;
       for(int i=0; i<apple.size(); ++i){
        total_apple += apple.at(i);
       }
       sort(capacity.begin(), capacity.end());
       int j = capacity.size()-1;
       while(j>=0){
        if( capacity.at(j) ==total_apple){
            count++;
            return count;
        }else{
            count++;
            total_apple -= capacity.at(j);
        }
        if(total_apple <= 0){
           return count;
        }else{
            --j;
        }
       }
       return count;
    }
};
