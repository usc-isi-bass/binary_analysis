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
	int i,j;
	char a[233],c;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]+'A'-'a';
	}
	c=a[0];
	for(i=0;c!='\0';i++)
	{
		for(j=0;a[i]==c;j++){i++;}
		if(j-i==0)
		j-=1;
		printf("(%c,%d)",c,j+1);
		c=a[i];
	} 
} 