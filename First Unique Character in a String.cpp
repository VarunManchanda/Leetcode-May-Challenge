/*
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
*/
#define _fast_ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class Solution {
public:
    int firstUniqChar(string s) {
        _fast_;
        int hashMap[26] = {0,};
        for(int i=0; i<s.length(); i++) 
        {
            hashMap[s[i]-'a']++;
        }
        for(int i=0; i<s.length(); i++)
        {
            if(hashMap[s[i]-'a']==1) return i;
        }
        return -1;
        
    }
};
