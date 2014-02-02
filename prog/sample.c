#include<stdio.h>
 
long long int MOD;
 
void matrixPower(long long int res[2][2], int n);
void matrixMultiplication(long long int a[2][2], long long int b[2][2]);
 
int main(){
int tc, i, j;
long long int n;
long long int fib[2][2];
long long int a, b;
//long long int sum_1, sum_2;
 
scanf("%d", &tc);
while(tc--){
scanf("%lld %lld", &n, &MOD);
//MOD = 1000000;
fib[0][0] = 1;
fib[0][1] = 1;
fib[1][0] = 1;
fib[1][1] = 0;
matrixPower(fib, 2 * n - 1);
a = fib[1][1];

 fib[0][0] = 1;
fib[0][1] = 1;
fib[1][0] = 1;
fib[1][1] = 0;
matrixPower(fib, 2 * n);
b = fib[1][1];
b = b % MOD;
/*sum_1 = fib[1][1];
fib[0][0] = 1;
fib[0][1] = 1;
fib[1][0] = 1;
fib[1][1] = 0;
matrixPower(fib, 2 * n + 1);
sum_2 = fib[1][1];
 
if(sum_2 < sum_1)
sum_2 += MOD;
printf("%lld\n", (sum_2 - sum_1) % MOD);*/
 
printf("%lld/%lld\n", a, b);
}
return(0);
}
void matrixPower(long long int res[2][2], int n){
long long int x[2][2] = {{1, 1}, {1, 0}};
 
while(n > 0){
if(n % 2 == 1){
matrixMultiplication(res, x);
n = n - 1;
}
n = n / 2;
matrixMultiplication(x, x);
}
}
 
void matrixMultiplication(long long int a[2][2], long long int b[2][2]){
long long int c[2][2];
 
c[0][0] = ((a[0][0] * b[0][0]) + (a[0][1] * b[1][0]) ) % MOD;
c[0][1] = ((a[0][0] * b[1][0]) + (a[0][1] * b[1][1]) ) % MOD;
c[1][0] = ((a[1][0] * b[0][0]) + (a[1][1] * b[1][0]) ) % MOD;
c[1][1] = ((a[1][0] * b[0][1]) + (a[1][1] * b[1][1]) ) % MOD;
 
a[0][0] = c[0][0];
a[0][1] = c[0][1];
a[1][0] = c[1][0];
a[1][1] = c[1][1];
}
