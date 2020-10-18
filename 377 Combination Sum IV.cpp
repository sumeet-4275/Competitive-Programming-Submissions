class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        map<unsigned long long, unsigned long long> dp;
        dp[0]=1;
        for(unsigned long long i=1;i<=target;i++)
        {
            for(unsigned long long j=0;j<nums.size();j++)
            {
                if(i-nums[j]<0)break;
                dp[i]+=dp[i-nums[j]];
            }
        }
        
        return dp[target];
    }
};
