#include <stdio.h>

int main() {
    char c = 'C';
    short s = 1000;
    int i = 32;
    long int li = 4444L;
    long long int lli = 44444444LL;

    float f = 6.66f;
    double d = 5.43;
    long double ld = 3.441414114L;

    unsigned char uc = 200;
    unsigned short us = 50000;
    unsigned int ui = 3000000000U;
    unsigned long int uli = 999999999UL;
    unsigned long long int ulli = 18446744073709551615ULL;

    printf("char = %c\n", c);
    printf("short = %d\n", s);
    printf("int = %d\n", i);
    printf("long int = %ld\n", li);
    printf("long long int = %lld\n", lli);

    printf("float = %.2f\n", f);
    printf("double = %.15lf\n", d);
    printf("long double = %.18Lf\n", ld);

    printf("unsigned char = %u\n", uc);
    printf("unsigned short = %hu\n", us);
    printf("unsigned int = %u\n", ui);
    printf("unsigned long int = %lu\n", uli);
    printf("unsigned long long int = %llu\n", ulli);

    return 0;
}