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
	char s1[300];
	char s2[28]="abcdefghijklmnopqrstuvwxyz",*ps;
	int count,i,k=0;	
    scanf("%s",s1);
	int len = strlen(s1);
	for(ps=s2;*ps!='\0';ps++)
	{
		count=0;
        for(i=0;i<len;i++)
		{
			if(s1[i]==*ps)
				count++;
		}
		if(count!=0)
		{
		    k++;
			printf("%c=%d\n",*ps,count);
	    }
       
	} 
	if(k==0)
	{
		printf("No");
	}
	return 0;
}