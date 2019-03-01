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
	char s[max+1];
	int i,j,n;
	scanf("%d",&n);
	while(n-->0){
		scanf("%s",s);
		for(j=0;s[j];j++){
			if(s[j]=='A')
				s[j]=s[j]-'A'+'T';
			else if(s[j]=='T')
				s[j]=s[j]-'T'+'A';
			else if(s[j]=='G')
				s[j]=s[j]-'G'+'C';
			else if(s[j]=='C')
				s[j]=s[j]-'C'+'G';
		}
		
	printf("%s\n",s);
		
	}
		return 0;
}