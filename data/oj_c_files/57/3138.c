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
	char a[50];
	int n,i,j,k;
	scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	scanf("%s",&a);
	k=strlen(a);
	for(j=k-1;j>=0;j--)
	{	
		if(a[k-1]=='r'||a[k-1]=='y')
			{
		a[k-1]='\0';a[k-2]='\0';
			printf("%s\n",a);
			}
        if(a[k-1]=='g')
			{a[k-1]='\0';
		a[k-2]='\0';
		a[k-3]='\0';
		printf("%s\n",a);
			} 
	}
		
 }
}