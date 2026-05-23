class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0)
            return 0;

        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        int count = 0;

        for (auto it : mp) {

            if (k == 0) {
                if (it.second > 1)
                    count++;
            }
            else {
                if (mp.count(it.first + k))
                    count++;
            }
        }

        return count;
    }
};