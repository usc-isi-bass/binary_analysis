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
	int i,j,n;
	char zfc[MAX+1];
	char a='A';
	char b='T';
	char c='C';
	char d='G';
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s",zfc);
	
		for(j=0;zfc[j];j++){
			if(zfc[j]==a){
				zfc[j]=b;
				continue;}
			
			if(zfc[j]==b){
				zfc[j]=a;
				continue;}

			if(zfc[j]==c){
				zfc[j]=d;
				continue;}

			if(zfc[j]==d){
				zfc[j]=c;
				continue;}
			
		}
			printf("%s\n",zfc);
		}	
	
	return 0;
}
			
			
	
