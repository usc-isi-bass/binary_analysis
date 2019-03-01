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
	char a[51]={""},word[51][51]={""};
	int n=0,i=0,k=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		k=strlen(a);
		if(a[k-1]==103)
		{
			a[k-2]='\0';
            a[k-1]='\0';
            a[k-3]='\0';
		}
		else
		{   
		   a[k-2]='\0';
           a[k-1]='\0';
        }
	strcpy(word[i],a);
	}
	for(m=0;m<n;m++)
		printf("%s\n",word[m]);
}