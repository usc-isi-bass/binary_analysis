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

int main(int argc,char *argv[])
{
    int n,i,a[3]={0,0,0},flag=0;
    scanf("%d",&n);
    for(i=0;i<3;i++)if(n%(3+2*i)==0){a[i]=1;flag=1;}
    if(flag==0)printf("n\n");
    else for(i=0;i<3;i++)if(a[i]==1){printf("%d",3+2*i);break;}
    for(i+=1;i<3;i++)if(a[i]==1)printf(" %d",3+2*i);
    printf("\n");
    return 0;
}