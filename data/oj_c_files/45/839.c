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
	char a[50],b[50]; 
	int i=0,j,p; 
	int flag=1; 
	scanf("%s",b); 
	printf(" ");
	scanf("%s",a);
	printf("\n"); 
	while(a[i] && flag) 
	{ 
		p=i; 
		j=0; 
		while(a[i]&&b[j]&&a[i]==b[j]) 
		{
			i++;j++;} 
		if(!(b[j])) 
		flag=0; 
		else 
		i=p+1; 

		} 
		if(!flag) 
		printf("%d\n",p); 

		return 0;
} 