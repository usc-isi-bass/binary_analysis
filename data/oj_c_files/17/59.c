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


//?????????????????????????????????????
//???????????????;break;???????
//??????????????????

int main(int argc, char* argv[])
{
	char s[100];
	int i,j;
	
	while(scanf("%s",s)!=EOF)
	{
		puts(s);
		int a[100]={0};
		for(i=0;s[i]!='\0';i++)
			if(s[i]=='(')
				a[i]=-1;
			else if(s[i]==')')
				a[i]=1;
			
			for(i=0;s[i]!='\0';i++)
				if(a[i]==1)
					for(j=i-1;j>=0;j--)
						if(a[j]==-1)
						{
							a[i]=a[j]=0;
							break;
						}
						
			for(i=0;s[i]!='\0';i++)
				if(a[i]==1) printf("?");
				else if(a[i]==-1) printf("$");
				else if(a[i]==0) printf(" ");
			printf("\n");
	}

	return 0;
}