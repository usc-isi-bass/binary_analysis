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
	char sz[50][100];
	int n;
	scanf("%d",&n);
	int k;
	int sm[50];
	for(int i=0;i<n;i++){
		scanf("%s",sz[i]);
		sm[i]=strlen(sz[i]);
		k=sm[i];
		if(sz[i][k-1]=='r'&&sz[i][k-2]=='e'){
		sz[i][k-2]=0;
		printf("%s\n",sz[i]);
		}
		if(sz[i][k-1]=='y'&&sz[i][k-2]=='l'){
		sz[i][k-2]=0;
		printf("%s\n",sz[i]);}
		if(sz[i][k-1]=='g'&&sz[i][k-2]=='n'&&sz[i][k-3]=='i'){
		sz[i][k-3]=0;
		printf("%s\n",sz[i]);
		}
	}
	return 0;
}