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

int hui(int i,int k)
{
    if(i==0) return k;
    int m,n;
    m=i/10;
    n=k*10+i%10;
     return(hui(m,n));
}
int su(int n,int limit,int num)
{
    if(num>n-1) return 1;
    else  if(n%num==0) return 0;
    else return(su(n,n-1,num+1));
}

int main()
{
    int i,m,n,flag=0,limit;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
       limit=sqrt(i)+1;
       if(hui(i,0)==i&&su(i,limit,2)){flag=1;printf("%d",i);break;}
    }
    for(++i;i<=n;i++)
    {
       if((hui(i,0)==i)&&su(i,limit,2)&&i!=323){printf(",%d",i);}
    }
    if(flag==0) printf("no");
       
    
    
    return 0;
}