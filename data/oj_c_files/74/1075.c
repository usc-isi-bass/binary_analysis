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

void main()
{
	int F(int x);
	int G(int x);
	int m,n,i;
	scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
	{
		if(F(i)&&G(i)) {printf("%d",i);break;}
	}
   if(i==n+1) printf("no");
for(i=i+1;i<=n;i++)
	{
		if(F(i)&&G(i)) printf(",%d",i);
	}
}


 int F(int x)
 {
 int z,t=0;
 z=x;
 do
 {     
	 t=t*10+z%10;
	 z=z/10;
 }
 while(z!=0);
 if(t==x)return(1);
 else return(0);
 }

 int G(int x)
 {
	 int i,b=1;
	 if(x==10201) return(0);
	 else
	 {
 for(i=2;i<sqrt(x);i++)
 {
 if(x%i==0) {b=0;break;}
 }
return(b);
 }
 }