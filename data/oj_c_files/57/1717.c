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

int main ()
{
	char zfc[100][50],gaiguo[100][50];
	int n,l[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",zfc[i]);
		l[i]=strlen(zfc[i]);
		if(zfc[i][l[i]-3]=='i' && zfc[i][l[i]-2]=='n' && zfc[i][l[i]-1]=='g'){
			strncpy(gaiguo[i],zfc[i],l[i]-3);
			
		}else if(zfc[i][l[i]-2]=='e' && zfc[i][l[i]-1]=='r'){
			strncpy(gaiguo[i],zfc[i],l[i]-2);
			
		}else if(zfc[i][l[i]-2]=='l' && zfc[i][l[i]-1]=='y'){
			strncpy(gaiguo[i],zfc[i],l[i]-2);
			
		}
	}
	for(int j=0;j<n;j++){
		printf("%s\n",gaiguo[j]);
	}
    return 0;
} 