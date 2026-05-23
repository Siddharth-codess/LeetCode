class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum1=0;
        int sum2=0;
        for ( int i = 0;i<n;i++){
            sum1+=nums[i];
        }
        for (int i =1;i<n+1;i++){
            sum2+=i;
        }
        return sum2-sum1;
    }
};