int numIdenticalPairs(vector<int>& nums) {
      int Count = 0;

    for (int i = 0; i < nums.size()- 1; ++i) {

        for (int j = i + 1; j < nums.size(); ++j) {

            if (nums.at(i) == nums.at(j)) {

              Count++;

            }

        }

    }

    return Count;
