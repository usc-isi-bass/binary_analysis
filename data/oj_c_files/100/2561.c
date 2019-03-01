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

	char a[300];
	int b[300],i,d,sign=0;
	for(i=0;i<=299;i++)
		b[i]=0;
	scanf("%s",a);
	d=strlen(a);
	for(i=0;i<d;i++)
		if((a[i]-65>=0&&a[i]-90<=0)||(a[i]-97>=0&&a[i]-122<=0))
			b[a[i]]+=1;
	for(i=1;i<=299;i++)
		if(b[i]!=0)
		{
			printf("%c=%d\n",i,b[i]);
			sign=1;
		}
	if(sign==0)
printf("No");


		return 0;


			







}