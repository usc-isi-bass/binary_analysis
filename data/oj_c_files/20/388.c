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

int main ()
{
	char str[100][11]={0}, substr[100][4]={0}, ans[100][20]={0};
	int i=0, j, max=0, index, n=0;
	for (j=0; scanf("%s %s", str[j], substr[j])!=EOF; j++)
		n++;	
	for(j=0; j<n; j++)
		{
			max=0;
		    for (i=0; i<10; i++)
				if (str[j][i]>max)
				{
				  max=str[j][i];
				  continue;
				}
			for (i=0; i<10; i++)
			    if (str[j][i]==max)
				{
				   index=i;
				   break;
				}
		    for (i=0; i<index+1; i++)
			    ans[j][i]=str[j][i];
		    for (i=index+1; i<index+strlen(substr[j])+1; i++)
			    ans[j][i]=substr[j][i-index-1];
		    for (i=index+strlen(substr[j])+1; i<strlen(str[j])+strlen(substr[j]); i++)
			    ans[j][i]=str[j][i-strlen(substr[j])];
		    puts(ans[j]);
		}	
		return 0;
}
