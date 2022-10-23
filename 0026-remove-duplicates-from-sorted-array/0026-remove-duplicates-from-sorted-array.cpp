class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = sizeof(nums)/sizeof(nums[0]);
        set < int > set;
  for (int i = 0; i < nums.size(); i++) {
    set.insert(nums[i]);
  }
  int count=0;
        for(auto itr : set)
        {
            nums[count]=itr;
            count++;
        }
        return count;
    }
};