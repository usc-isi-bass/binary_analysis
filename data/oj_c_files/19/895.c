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
	char sz[100],zfc[20][20],a[20],b[20];
	gets(sz);
	scanf("%s",a);
	scanf("%s",b);
	int i,j=0,k=0;
	for(i=0;i<=strlen(sz);i++){
		if(sz[i]!='\0'&&sz[i]!=' '){
		  zfc[j][k]=sz[i];
		  k++;
		}
		if(sz[i]=='\0'||sz[i]==' '){
		 zfc[j][k]='\0';
		 j++;
		 k=0;
		}
	}
    for(i=0;i<=j;i++){
		if(strcmp(zfc[i],a)==0){
		strcpy(zfc[i],b);
		}
	}
	printf("%s",zfc[0]);
	for(i=1;i<j;i++){
	printf(" %s",zfc[i]);
	}
	return 0;
}