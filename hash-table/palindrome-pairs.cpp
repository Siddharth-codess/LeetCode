class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string, int> mp;
        vector<vector<int>> ans;

        for (int i = 0; i < words.size(); i++) {
            mp[words[i]] = i;
        }

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];

            for (int j = 0; j <= word.size(); j++) {

                string left = word.substr(0, j);
                string right = word.substr(j);

                if (isPalindrome(left, 0, left.size() - 1)) {
                    string revRight = right;
                    reverse(revRight.begin(), revRight.end());

                    if (mp.count(revRight) && mp[revRight] != i) {
                        ans.push_back({mp[revRight], i});
                    }
                }

                if (j != word.size() && isPalindrome(right, 0, right.size() - 1)) {
                    string revLeft = left;
                    reverse(revLeft.begin(), revLeft.end());

                    if (mp.count(revLeft) && mp[revLeft] != i) {
                        ans.push_back({i, mp[revLeft]});
                    }
                }
            }
        }

        return ans;
    }
};