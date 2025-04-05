class Solution {
public:
    int longestPalindrome(string s) {
        set<char>sett;
        int count =0;
        for(int i = 0; i< s.size(); i++){
                   if(sett.find(s[i]) == sett.end()){
                    sett.insert(s[i]);
                   }
                   else{
                    sett.erase(s[i]);
                    count++;
                   }
        }
        count=count*2;
        if(!sett.empty()){
            count+=1;
        }
        return count;
    }
};