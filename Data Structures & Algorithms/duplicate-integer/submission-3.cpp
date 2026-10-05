class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> seen;
        for(int num:nums)
        { 
            if(seen[num]>0)
            return true;
            seen[num]++;
        }
        return false;


    }
};