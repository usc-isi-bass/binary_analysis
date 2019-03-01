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
	scanf("%d",&n);
	int m[n][3];
	for(i=0;i<n;i++){
		scanf("%d %d %d",&m[i][1],&m[i][2],&m[i][3]);
	}
	for(j=0;j<n;j++){
		if(((m[j][2]==9&&m[j][3]==12)||(m[j][3]==9&&m[j][2]==12))||((m[j][2]==4&&m[j][3]==7)||(m[j][3]==4&&m[j][2]==7))||((m[j][2]==3&&m[j][3]==11)||(m[j][3]==3&&m[j][2]==11)))
			printf("YES\n");
		else {
			if(((m[j][1]%4==0&&m[j][1]%100!=0)||(m[j][1]%400==0))&&(((m[j][2]==1&&m[j][3]==4)||(m[j][3]==1&&m[j][2]==4))||((m[j][2]==1&&m[j][3]==7)||(m[j][3]==1&&m[j][2]==7))||((m[j][2]==2&&m[j][3]==8)||(m[j][3]==2&&m[j][2]==8))))
				printf("YES\n");
			else {
				if((m[j][1]%4!=0||(m[j][1]%100==0)&&(m[j][1]%400!=0))&&(((m[j][2]==1&&m[j][3]==10)||(m[j][3]==1&&m[j][2]==10))||((m[j][2]==2&&m[j][3]==3)||(m[j][3]==2&&m[j][2]==3))||((m[j][2]==2&&m[j][3]==11)||(m[j][3]==2&&m[j][2]==11))))
					printf("YES\n");
				
				else
					printf("NO\n");
			}
		}
	}
	return 0;
}
				
		