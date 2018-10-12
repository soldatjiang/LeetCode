#include <cmath>
class Solution {
public:
    double myPow(double x, int n) {
        double ret=1.;
        double pow[32];
        int num=abs(n);
        
        pow[0]=x;
        for(int i=1;i<32;i++)
            pow[i]=pow[i-1]*pow[i-1];
        
        for(int i=0;i<32;i++)
        {
            if(num&1)
                ret*=pow[i];
            num=num>>1;
        }
        
        if(n<0)
            ret=1/ret;
        
        return ret;
    }
};