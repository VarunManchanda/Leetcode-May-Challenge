/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, 
write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, 
it will return false.
Each letter in the magazine string can only be used once in your ransom note.
Note:
You may assume that both strings contain only lowercase letters.
*/
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> s;
        for(auto i : magazine) s.insert(i);
        for(auto i : ransomNote)
        {
            auto itr = s.lower_bound(i);
            if(*itr==i) s.erase(itr);
            else return false;
        }
        //return true;
        return fastApproach(ransomNote,magazine);
    }
    bool fastApproach(string r, string m)
    {
        unordered_map<char,int> hashMap;
        for(auto i : magazine) hashMap[i]++;
        for(auto c : ransomNote)
        {
            if(hashMap.find(c)!=hashMap.end())
            {
                if(hashMap[c]>=1) hashMap[c] -= 1;
                else return false;
            }
            else return false;
        }
        return true;
    }
};
