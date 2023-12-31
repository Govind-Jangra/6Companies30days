// https://leetcode.com/problems/minimize-the-maximum-of-two-arrays/description/
class Solution {
public:
    bool solve(long long  d1, long long d2, long long u1, long long u2,long long m)
    {
        
            long long lcm=(d1/__gcd(d1,d2))*d2;

        return (u1<=m-m/d1) & (u2<=m-m/d2) & (u1+u2<=m-m/lcm);


    }
    int minimizeSet(int d1, int d2, int u1, int u2) {
        int ans=0;
        long long i=1,j=INT_MAX;
        while(i<=j)
        {
            int m=(i+j)/2;
            if(solve(d1,d2,u1,u2,m))
            {

                ans=m;
                j=m-1;
            }
            else i=m+1;

        }
        return ans;

    }
};