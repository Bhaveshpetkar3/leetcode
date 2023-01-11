class Solution {
public:
    int fibo[40];
    int fib(int n) {
        if(n<=1)return n;
        if(fibo[n]!=0)return fibo[n];
        fibo[n]=fib(n-1)+fib(n-2);
        return fibo[n];
    }
};