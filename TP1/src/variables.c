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

    printf("char %c\n", c);
    printf("short %d\n", s);
    printf("int %d\n", i);
    printf("long int %ld\n", li);
    printf("long long int %lld\n", lli);

    printf("float %.2f\n",f);
    printf("double %.15lf\n",d);
    printf("long double %.18Lf\n", ld);

    return 0;
}





