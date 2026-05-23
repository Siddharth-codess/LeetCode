class Solution {
public:
    bool isPalindrome(int x) {
        int Dup=x;
        long long revNum =0;
        while(x>0){
            int lastDig = x%10;
            x=x/10;
            revNum=(revNum * 10)+lastDig;
        }
        if(Dup==revNum) return true;
        else return false;
    }
};