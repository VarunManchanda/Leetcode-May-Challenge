/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  
Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, 
so "a" is considered a different type of stone from "A".
*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> h1, h2;
        for(auto c : J) h1[c]++;
        for(auto c : S) h2[c]++;
        int ans = 0;
        for(auto c : J)
            if(h2.find(c)!=h2.end())
                ans += h2[c];
        return ans;

    }
};
