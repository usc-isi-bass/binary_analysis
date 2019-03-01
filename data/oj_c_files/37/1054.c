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


main()
{
	int n,i,j,k;
	char a[100000],b[100],*pa,*pb;
	scanf("%d",&n);
	gets(a);
	pb=b;
	for(i=0;i<n;i++){
		gets(a);
		pa=a;
		for(j=0;j<strlen(a);j++){
			for(k=0;k<strlen(a);k++){
				if(k==j)
					;
				else if(*(pa+j)==*(pa+k)){
					break;
				}
			}
			if(k==strlen(a)){
				*(pb+i)=*(pa+j);
				break;
			}
		}
		if(j==strlen(a)){
			*(pb+i)=0;
		}
	}
	for(i=0;i<n;i++){
		if(*(pb+i)==0){
			printf("no\n");
		}
		else{
			printf("%c\n",*(pb+i));
		}
	}
}