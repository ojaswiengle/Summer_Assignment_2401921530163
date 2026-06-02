class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int start=0;start  <  nums.size();start++)
        {
             for(int end=start+1;end  <  nums.size();end++)
            {
               if(nums[start]==nums[end])
               {
                return true;
               }
            }
        }
        return false;
    }
};
