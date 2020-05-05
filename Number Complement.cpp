/*
Given a positive integer, output its complement number. The complement strategy is to flip the bits of 
its binary representation.
*/
class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
       //check the ith bit if set then set in new number else continue;
        int new_num = 0;
        int i = 0;
        while(num!=0)
        {
            if(!(num&1))
            {
                new_num |= (1<<i); //set that ith bit
            }
            i+=1;
            num >>= 1;
        }
        return new_num;
    }
};
