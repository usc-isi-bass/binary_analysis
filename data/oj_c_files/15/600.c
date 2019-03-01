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

int main(int argc, char* argv[])
{
	int n;
	int m;
	scanf("%d",&n);
	int liu[100][100];
    int i,j,p;
	int x1,x2,y1,y2;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&liu[i][j]);
		}
	}
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(liu[i][j]==0&liu[i+1][j]==0&liu[i][j+1]==0){
				x1=i;
				y1=j;}
			if(liu[i][j]==0&liu[i-1][j]==0&liu[i][j-1]==0)
			{x2=i;
			y2=j;}
				
		}
	}
    m=(x2-x1-1)*(y2-y1-1);
	printf("%d",m);
	return 0;
}