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
	char a[1000];
	int i=0,j,k,b[1000];
	scanf("%s",a);
	while(a[i]!='\0')
	{
	if(a[i]>='a'&&a[i]<='z')
	a[i]=a[i]-'a'+'A';
	i++;
    }
    
    for(j=0;j<i;)
    {
		b[j]=0;
		for (k=j;k<i;k++)
		{
		if(a[j]==a[k])
		b[j]++;
		else
		break;
		
		}
		printf("(%c,%d)",a[j],b[j]);
		j=k;
	}
	
}
