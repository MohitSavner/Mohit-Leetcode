class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos ) {
            //if inside loop, it means that part exits in s string, therfore nned to remove/erase the part
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};