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
	char zfc[300*50];
	int wl[300];
	int w=0;
	int i,j;
	gets(zfc);
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]!=' '){
			for(j=i+1;zfc[j]!=0&&zfc[j]!=' ';j++);
			wl[w]=j-i;
			w++;
			if(zfc[j]==0)
				break;
			else
				i=j;
		}
	}
	printf("%d",wl[0]);
	for(i=1;i<w;i++)
		printf(",%d",wl[i]);
	return 0;
}