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
	int n,p,num[255];
	char ch,boy;
	num[0]=0;
	scanf("%c",&boy);
	for(n=p=1;p>0;n++){
		scanf("%c",&ch);
		if(ch==boy){
			num[p]=n;
			p++;
		}
		else{
			printf("%d %d\n",num[p-1],n);
			p--;
		}
	}
	return 0;
}
