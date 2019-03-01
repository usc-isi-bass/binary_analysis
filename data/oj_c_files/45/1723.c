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
	int a=0;
	char s[1000];
	char w[1000];
	int i,j,b;
	scanf("%s",s);
	scanf("%s",w);
    b = strlen(s);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[0]){
			for(j=0;s[j]!='\0';j++){
				if(s[j]==w[i+j])a++;
			}
			if(a==b)printf("%d",i);
		}
	}
	return 0;
}

