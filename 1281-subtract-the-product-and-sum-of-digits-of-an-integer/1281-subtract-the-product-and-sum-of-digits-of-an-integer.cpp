class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        while(n)
        {
            int x=n%10;
            pro*=x;
            sum+=x;
            n=n/10;
        }
        return pro-sum;
    }
};