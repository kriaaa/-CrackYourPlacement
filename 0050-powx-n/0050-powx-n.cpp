class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        double ans = 1;
        long long absn= n; // Use long long to handle overflow when n is INT_MIN
        if (absn< 0) {
            absn= -absn;
        }
        while(absn) {
            if(absn%2)
            {
                 ans=ans*x;
                 absn=absn-1;


            }
            else{
                x=x*x;
                absn=absn/2;
            }
           
        }
        if (n < 0) {
            ans = 1 / ans;
        }
        return ans;
    }
};
