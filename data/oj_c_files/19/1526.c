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

void main()
{   
	char s0[101],s1[101],s2[101],a[100][21];
	int i=0,j=0,k=0;
    gets(s0);
	gets(s1);
	gets(s2);
    
	for(i=0,j=0;i<strlen(s0);i++)
		if(s0[i]!=' ')
		a[j][k]=s0[i],k++;
		else
		a[j][k]='\0',j++,k=0;
     
	a[j][k]='\0';
    for(i=0;i<=j;i++)
		if(strcmp(a[i],s1)==0)
			if(k){
			printf("%s",s2);
			k=0;}
			else
            printf(" %s",s2);
		else
			if(k){
			printf("%s",a[i]);
			k=0;}
			else
			printf(" %s",a[i]);



	
}