class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;
        int l=0;
        for(int r=1;r<n;r++){
            if(nums[r]!=nums[l]){
                l++;
                nums[l]=nums[r];
            }
        }
        return l+1;
    }
};