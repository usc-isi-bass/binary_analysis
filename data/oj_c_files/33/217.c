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
    int n,i,j;
    char an[1000][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",&an[i]);
        for(j=0;an[i][j]!=0;j++)
        {
            if(an[i][j]=='A')
			   printf("T");
		   else if(an[i][j]=='T')
			   printf("A");
		   else if(an[i][j]=='C')
			   printf("G");
		   else if(an[i][j]=='G')
			   printf("C");
        }
        printf("\n");
    }
    return 0;
}
