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
	char an[50][33];
	int n,i,bn[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",an[i]);
	for(i=0;i<n;i++)
		bn[i]=strlen(an[i]);
	for(i=0;i<n;i++){
		if((an[i][bn[i]-2]=='e'&&an[i][bn[i]-1]=='r')||(an[i][bn[i]-2]=='l'&&an[i][bn[i]-1]=='y'))
			an[i][bn[i]-2]='\0';
		if(an[i][bn[i]-3]=='i'&&an[i][bn[i]-2]=='n'&&an[i][bn[i]-1]=='g')
			an[i][bn[i]-3]='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",an[i]);
	return 0;
}