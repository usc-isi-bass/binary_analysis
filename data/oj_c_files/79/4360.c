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

main()
{
int n,m,i,k,s[1000];
memset(s,0,sizeof(s));
for(k=0;k<1000;k++) 
{scanf("%d %d",&n,&m);
for (i=2;i<=n;i++) 
s[i]=(s[i-1]+m)%i;
if(m==0)
break;
if(n==1)
printf("1\n");
else
printf("%d\n",s[n]+1);
}}