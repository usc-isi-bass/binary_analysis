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
	int a, i, j, k, tot, s;
	a=0;
	int num[20]={0};
	while (a!=-1)
	{
	j=1;
	tot=1;
	s=0;
	for (i=1;i<=20;i++)
		num[i]=0;
	i=1;
	cin >> a;
	while ( a!=-1 )
	{ 
		if (a!=0)
		{
			num[i++]=a;
		    tot++;
			cin >> a;
		}

		else break;
	}
   if (a!=-1)
   {
	   for(j=1;j<=tot;j++)
	     for(k=j+1;k<=tot;k++)
		   if ((num[k]==2 * num[j])||(2 * num[k]==num[j]))
		    s++;
		   cout << s << endl	;
	}}     cin >> s;
		  return 0;

}
