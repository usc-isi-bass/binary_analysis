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

int b[50];
int main()
{
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
	int i;
	int count=0;
	for(i=0;s2[i]!='\0';i++){
		if(s2[i]==s1[0]){
	    count++;
	    if(count==1)
			printf("%d",i);
		}
	}
	return 0;
}

