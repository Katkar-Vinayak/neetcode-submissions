class Solution {
public:
    bool isHappy(int n) {
        int h=n;
        
        set<int>st;
        while(h!=1)
        {
            int s=0;
            while(h>0){
                int d=h%10;
                s=s+d*d;
                h=h/10;
                }
            if(st.count(s)!=0)
            {
                return false;
            }
            st.insert(s);
            h=s; 
        }
        return true;
        
    }
};
