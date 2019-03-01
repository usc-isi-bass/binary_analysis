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

int pg(int x,int y)
{
 int an[1000],i,j;
 an[x]=y;
 do
 {
   an[x]=an[x]+x;
   for(i=x-1;i>0;i--)
   {
    if(an[i+1]%(x-1)!=0)
		break;
	else an[i]=an[i+1]/(x-1)*x+y;
   }
 }while(i>0);
 return (an[1]);
}
int main()
{
 int n,k;
 cin>>n>>k;
 cout<<pg(n,k);
 return 0;
}