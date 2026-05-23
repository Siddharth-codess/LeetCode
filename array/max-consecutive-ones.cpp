class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxii=0;
        int cnt=0;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                maxii=max(maxii,cnt);
                cnt=0;
            }
        }
        maxii=max(maxii,cnt);
   return maxii; }
};