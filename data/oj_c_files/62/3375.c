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
	int i,j,k;
	char a[300]={'\0'};
	char c[300]={'\0'};

    for(i=0;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{break;}
	}
	k=i;
	//printf("%s",a);
	
	
	c[0]=a[0];
	

	for(i=1,j=1;i<k;)
	{
		
		if(a[i]!=' ')
		{c[j]=a[i];j++;i++;}
		if((a[i]==' ')&&(a[i-1]!=' '))
		{c[j]=a[i];j++;i++;}
		if((a[i]==' ')&&(a[i-1]==' '))//'\0'????????
		{i++;}
		//printf("%c",c[j]);
	}

	for(i=0;i<j;i++)
	{printf("%c",c[i]);}
	return 0;
}
