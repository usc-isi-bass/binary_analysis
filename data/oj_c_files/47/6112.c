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
	int i,n,s[100];
    scanf("%d/n",&n);
	for(i=0;i<n;i++){scanf("%d",&s[i]);};
	for(i=n-1;i>=0;i--)
	{
		if(i!=0){
			printf("%d ",s[i]);}
		else{printf("%d",s[i]);};
	}
	
	return 0;
}