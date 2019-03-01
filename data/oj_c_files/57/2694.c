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
	int i,j,n,m;
	char zfc[50][33];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",zfc[i]);
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			m=strlen(zfc[i]);
			if(strcmp(&zfc[i][m-2],"er")==0){
				zfc[i][m-2]='\0';
			}
			else if(strcmp(&zfc[i][m-2],"ly")==0){
				zfc[i][m-2]='\0';
			}
			else if(strcmp(&zfc[i][m-3],"ing")==0){
				zfc[i][m-3]='\0';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",zfc[i]);
	}
	return 0;
}
