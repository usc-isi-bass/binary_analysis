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
	int i,j,sz[300],m=0;
	gets(zfc);
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]!=' '){
			for(j=i+1;zfc[j]!=0&&zfc[j]!=' ';j++){
			}
			sz[m]=j-i;
			m++;
			if(zfc[j]==0){
				break;
			}
			else{
				i=j;
			}
		}
	}        
	for(i=0;i<m-1;i++){
	     printf("%d,",sz[i]);
	}
	printf("%d",sz[m-1]);
	return 0;
}
