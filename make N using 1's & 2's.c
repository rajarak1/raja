 #include<stdio.h>
 long  moduloMultiplication
 {
 long long res = 0;  
 a %= mod;
 while (b)
 {
 if (b & 1)
 res = (res + a) % mod;
 a = (2 * a) % mod;
 b >>= 1;    
     
 return res;
}
int main()
{
    long long a = 10123465234878998;
    long long b = 65746311545646431;
    long long m = 10005412336548794;
    printf("%lld", moduloMultiplication(a, b, m));
    return 0;
}
