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


int main()
{
    int f(int n,int k);
    int n,k;
    scanf("%d %d",&n,&k);
	printf("%d\n",f(n,k));
	return 0;
}
int f(int n,int k)
{
	double s,x;
    int i,j,m;
    for(j=1;;j++){
             s=n*j+k;
	         for(i=2;i<=n;i++){
                 s=n*(s/(n-1))+k;
                 m=(int)s;
                 x=s-m;
                 if(x!=0){
                    break;}             
             }
             m=(int)s;
             x=s-m;
             if(x==0){
                    break;}
    }
    return s;
}

