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
	char s[50],w[50];
	int l1,l2,i,j,count=0;
	scanf("%s%s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	for(i=0;i<l2;i++){
		if(*s==*(w+i)){
			for(j=1;j<l1;j++){
				if(*(s+j)==*(w+i+j)){
					count++;
				}
			}
			if(count==l1-1){
				printf("%d\n",i);
			}
		}
	}
			return 0;
}


