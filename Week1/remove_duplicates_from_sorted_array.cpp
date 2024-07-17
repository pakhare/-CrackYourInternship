class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int prevElement= nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=prevElement){
                prevElement = nums[i];
                swap(nums[i], nums[j]);
                j++;
            }

        }
        return j;
    }
};
