class Solution {
public:
    int climbStairs(int n) {
        //Base Class
        if (n==1) {
            return 1;
        }
        else if(n==2) {
            return 2;
        }
        else if (n==0){
            return 1;
        }
        //Recursive Function
        int total=climbStairs(n-1)+climbStairs(n-2);
        return total;
    }
};