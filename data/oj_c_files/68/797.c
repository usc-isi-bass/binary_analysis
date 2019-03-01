#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int prime[50001];
int isPrime(int a)
{
        if(prime[a] == 1)
                return 1;
        if(prime[a]==2)
                return 0;
        if(a%2==0 && a!=2)
        {
                prime[a]=2;
                return 0;
        }
        for(int i=3;i*i<=a;i+=2)
                if(a%i==0)
                {
                        prime[a]=2;
                        return 0;
                }
        prime[a]=true;
        return 1;
}
int main()
{
        int n;

        cin>>n;
        prime[2]=1;
        for(int i=6;i<=n;i+=2)
        {
                if(isPrime(i-2))
                        {
                                cout<<i<<"="<<2<<"+"<<(i-2)<<endl;
                                continue;
                        }

                for(int j=3;j*2<=i;j+=2)
                {
                        if(isPrime(j)&&isPrime(i-j))
                        {
                                cout<<i<<"="<<j<<"+"<<(i-j)<<endl;
                                break;
                        }
                }
        }
        return 0;
}