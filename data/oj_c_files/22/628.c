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
	char a[1501];
	int b[300],l,n,i,j,max,maxi=0,k=0;
	gets(a);
	l=strlen(a);
	n=0;
	for(i=0;i<l;)
	{
		b[n]=0;
		j=i;
		while(a[j]!=','&&j<l)
		{
			b[n]=b[n]*10+a[j]-'0';
			j++;
		}
		n++;     
		i=j+1;
	}

	max=b[0];
	for(i=1;i<n;i++)
	{	if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(b[i]<max&&b[i]>maxi)
		{	maxi=b[i];
		k++;}
	}
	if(k==0)
		printf("No");
	else printf("%d",maxi);
    


	return 0;
}