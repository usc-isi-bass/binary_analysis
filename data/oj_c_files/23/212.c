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
	char ju[101]={0},c[100][12]={0};
	int i=0,j=0,k,l;
	gets(ju);
	l=strlen(ju);
	while(i<l)
	{
		k=0;
		while(ju[i]!=' '&&i<l) 
		{
			c[j][k]=ju[i];
			i=i+1;
			k++;
		}
		c[j][k]='\0';
		j=j+1;
		i=i+1;
	}
	for(i=j-1;i>0;i--) printf("%s ",c[i]);
	printf("%s",c[0]);
}