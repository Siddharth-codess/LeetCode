class Solution {
public:
    vector<int> original;
    vector<int> temp;

    Solution(vector<int>& nums) {
        original = nums;
        temp = nums;
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        for (int i = temp.size() - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            swap(temp[i], temp[j]);
        }

        return temp;
    }
};