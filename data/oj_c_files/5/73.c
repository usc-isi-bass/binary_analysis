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
	char a[500],b[500];
	int len,lmn,sum=0,i,flag=1;
	double n;
	scanf("%lf",&n);
	scanf("%s%s",a,b);
	len=strlen(a);
	lmn=strlen(b);
	if(len!=lmn)
	{
		printf("error");
	}
else

for(i=0;i<len;i++)
{
  if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
{ flag=0;
  printf("error");
break;
}
}

if(len==lmn&&flag==1)
{
for(i=0;i<len;i++)
{
	if(a[i]==b[i])
		sum+=1;
}
if((double)sum/len>n)
printf("yes");
else
printf("no");
}


	return 0;
}