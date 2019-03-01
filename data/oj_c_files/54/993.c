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
 int n,k,sum,num;
 scanf("%d%d",&n,&k);
 int allocate(int n,int k,int sum,int num);
 num=n;
 for(sum=1;1;sum++)
 if(allocate(n,k,sum,num)){printf("%d",sum);break;}
 return 0;
}

int allocate(int n,int k,int sum,int num)
{
	if(sum/(num)==0 || sum%num!=k){return 0;}
	else if(n==1){return 1;}
	else return allocate(n-1,k,sum-sum/num-k,num);
}