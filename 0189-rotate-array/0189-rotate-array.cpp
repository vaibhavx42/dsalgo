class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tem(nums.size());
            
            for(int i=0;i<nums.size();i++){
                tem[(i+k)%nums.size()]= nums[i];
            }
         nums=tem;
    
    }
    
   
};