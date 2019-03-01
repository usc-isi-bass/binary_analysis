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
int count[26]={0},t=0,j,k=0; 
char i,str[300],*ps,zf[26]; 
scanf("%s",str); 
for(ps=str;*ps!='\0';ps++) 
{ 
	if(*ps>='a'&&*ps<='z'){ 
		for(i='a';i<='z';i++){ 
			if(i==*ps){ 
				t=i-'a'; 
				zf[t]=i; 
				count[t]++; 
			} 
		} 
	} 
} 
for(j=0;j<26;j++){ 
	if(count[j]!=0){ 
		printf("%c=%d\n",zf[j],count[j]); 
		k+=1; 
	} 
} 
if(k==0) 
printf("No"); 
return 0; 
} 