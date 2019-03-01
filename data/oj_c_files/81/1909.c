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
	int s[5][5],m,n;
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&s[i][j]);
		scanf("%d %d",&m,&n);
			if(m>=5||n>=5)
				printf("error");
			else{
				for(i=0;i<5;i++){
					for(j=0;j<4;j++)
					{
						if(i==m)
							printf("%d ",s[n][j]);
						else if(i==n)
							printf("%d ",s[m][j]);
						else printf("%d ",s[i][j]);
					}
					if(i==m)
						printf("%d",s[n][4]);
					else if(i==n)
						printf("%d",s[m][4]);
					else printf("%d",s[i][4]);
					printf("\n");
				}
			}
}
