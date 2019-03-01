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
	int sz[10][6];
	int i;
	for(i=0;i<10;i++){
		scanf("%d %d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4],&sz[i][5]);
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){
			break;
		}
	}
	int szf[10];
	for(i=0;i<10;i++){
		if(sz[i][0]==0&&sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0){
			break;
		}
		szf[i]=3600*(sz[i][3]+12-sz[i][0])+60*(sz[i][4]-sz[i][1])+sz[i][5]-sz[i][2];
		printf("%d\n",szf[i]);
	}
	return 0;
}