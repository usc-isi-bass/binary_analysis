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

int main(int argc, char* argv[])
{   int n,i,j,k;
    char p[21];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",p);
	 if(p[0]>='0'&&p[0]<='9')
	 {
		 printf("no\n");
	 }
	 else
	 {
	 for(j=0,k=0;j<strlen(p);j++)
	 {if((p[j]>='A'&&p[j]<='Z')||p[j]=='_'||(p[j]>='a'&&p[j]<='z')||(p[j]>='0'&&p[j]<='9'))
         k++;	
	 }
	 if(j==k)
		 printf("yes\n");
	 else
		 printf("no\n");
	}
	}
	return 0;
}
