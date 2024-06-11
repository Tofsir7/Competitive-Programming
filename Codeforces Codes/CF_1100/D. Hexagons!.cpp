#include<stdio.h>
int main()
{
    unsigned long long int n,h;
    scanf("%llu",&n);
    h=(n*(n+1))*3+1;
    printf("%llu\n",h);
    return 0;
}
