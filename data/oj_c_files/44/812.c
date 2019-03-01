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

int pow(int x,int y)
{
int i,sum=1;
for(i=0;i<y;i++)
{
sum*=x;
}
return (sum);

}


int rev(int x)
{ 
int i,k,j,m,ans=0;
if(x==0)
ans=0;
else
{
	while(x%10==0)
	{x=x/10;}
	for(j=0;x!=0;j++)
	{
	ans=ans*10+x%10;
	x=x/10;
	}
	
}
return(ans);
}

int main()
{
int a,i;
  for(i=0;i<6;i++)
  {
  scanf("%d",&a);
  printf("%d\n",rev(a));

  }
  return (0);

}