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
   char m[100],a[100];
	gets(m);	
int n=atoi(m),t,i,k,j;
	for (i=0;i<n;i++){	
	gets(a);		
for(k=0;a[k]!='\0';k++){
	t=1;	
	for(j=0;a[j]!='\0';j++){	
		if(j==k){	
			continue;	}	
		else{		
		if(a[j]==a[k]){
		t=0;	
			break;	
	}}}		
	if(t!=0){		
		printf("%c\n",a[k]);
		break;			}		}		if(t==0){		
	printf("no\n");		}	}			return 0;		}