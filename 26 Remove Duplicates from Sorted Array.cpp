class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[f])
            {   f++;
                nums[f]=nums[i];
            }
        }
        return f+1;
    }
};
