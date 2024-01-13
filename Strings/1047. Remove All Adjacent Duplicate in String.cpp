// ** 1047. Remove All Adjacent Duplicate in String **

/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
*/
  
string removeDuplicates(string s) {
string ans = "";
int i = 0;

while(i < s.length()) {
  if(ans.length() > 0 && s[i] == ans[ans.length() - 1]){  // ans[ans.length() - 1] >> ans right most character
      ans.pop_back();        //Existing character from ans index
      }
  else {
      ans.push_back(s[i]);   //Entering string a character to ans index
      }
  i++;
 }
 return ans;
 }
