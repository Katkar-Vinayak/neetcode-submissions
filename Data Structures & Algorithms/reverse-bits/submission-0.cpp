class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long r=0;
        for(int i=0;i<32;i++)
        {
            long long bit=(n>>i)&1;
            r=r+(bit<<(31-i));

        }
        return r;
    }
};
