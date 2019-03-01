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
	int n,i,j,k,flag,*a;
	char *s;
	scanf("%d",&n);
	a=(int *)malloc(200*sizeof(int));
	s=(char *)malloc(1000*sizeof(char));
	gets(s);
	for(i=1;i<=n;i++)
	{flag=0;
          for(k='a';k<='z';k++)
                *(a+k)=0;
	gets(s);
	for(j=0;*(s+j)!='\0';j++)
		*(a+*(s+j))=*(a+*(s+j))+1;
	for(j=0;*(s+j)!='\0';j++)
		if(*(a+*(s+j))==1) {printf("%c\n",*(s+j));flag=1;break;}
    if(flag==0) printf("no\n");
	}
}