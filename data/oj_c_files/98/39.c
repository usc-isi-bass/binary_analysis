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
	int n,i;
	scanf("%d",&n);
	char s[500][41];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	int count=-1;
	for(i=0;i<n;i++)
	{
		count+=strlen(s[i])+1;
		if((count-strlen(s[i])-1)==-1)
                {
                        printf("%s",s[i]);
                        continue;
                }
		else if(count>0&&count<=80)printf(" %s",s[i]);
		else if(count>80)
		{
			count=-1;
			i--;
			printf("\n");
		}
		

	}
    
	return 0;
}

