class Solution {
public:
    bool validPalindrome(string s) {
       int left = 0;
       int size = s.size();
       int right =size-1 ;
       while(left<right){
        if(s[left]==s[right]){
            left++;
            right--;

        }
        else{
           return ispalindrome(s,left+1,right) || ispalindrome(s,left,right-1);
        }
       }
       return true;
    }
  bool  ispalindrome(string s , int left  , int right){
        while(left< right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};