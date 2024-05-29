class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runsum;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            count=count+nums[i];
            runsum.push_back(count);
        }
        return runsum;
    }
};