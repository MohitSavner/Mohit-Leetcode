/* 
   0  - removal >> level
   1  - removal >> leverl ( r need to remove to make it Vaild Palindrome)
  >1  - removal >> abcd ( Need to remove multiple letters i.e. "bcd")
  
*/

class Solution {
public:
    bool CheckPalindrome(string s, int i, int j) {
        while(i <=j) {
            //Base case
            if(s[i] != s[j]) {
                return false;
            }
            //Processing i & j
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i =0;
        int j = s.length() - 1;
        while(i <=j) {
            if(s[i] != s[j]) {
                //Remove ith element one time or remove jth element one time
                return (CheckPalindrome(s, i+1, j) || CheckPalindrome(s, i, j-1) ) ;
            }
            else {
                //When ith and jth element is same increment and decrement i & j 
                // i.e. >> s[i] == s[j]
                i++;
                j--;
            }
        }
        return true;
    }
};
