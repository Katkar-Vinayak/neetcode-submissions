class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size();
        while(l<h)
        {
            int m=l+(h-l)/2;
            if(target==nums[m])
            {
                return m;
            }
            else if(target<nums[m]){
                h=m;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};
