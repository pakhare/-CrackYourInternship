class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        if(nums.size()==1) return;
        int j = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        if(j<0) return;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=0 && j<i){
                swap(nums[i], nums[j]);
                j++;
            }

        }
    }
};
