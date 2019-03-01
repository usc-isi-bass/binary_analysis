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


int main(){

	int n;

	scanf("%d",&n);

	int x,y,a,b,sz[100][100],tag,tag1=0;

	for(x=0;x<n;x++){

		tag=0;

		for(y=0;y<n;y++){

			scanf("%d",&sz[x][y]);

			if(sz[x][y]==0){

				tag++;

				tag1++;

			}

		}

		if(tag1==tag){

			a=tag-2;

		}

		

	}

	b=(tag1-2*(a+2))/2;

	printf("%d",a*b);

	return 0;

}



