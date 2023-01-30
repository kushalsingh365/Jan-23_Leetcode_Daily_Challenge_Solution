class Solution {
public:
    int tribonacci(int n) {
        if (!n) return 0;
        if (n<3) return 1;
        int t0=0;
        int t1=1;
        int t2=1;
        int t;
        for (int i=3 ; i<n+1 ; i++)
        {
            t = t0+t1+t2;
            t0 = t1;
            t1 = t2;
            t2 = t;
        }
        
        return t;
    }
};
