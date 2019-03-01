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
	int i,j,k,a;
	char str1[50],str2[50];
	j=0;
	k=0;
	scanf("%s %s",str1,str2);
	for(i=0;i<50;j++)
	{
		if(str1[i]==str2[j]){i++;k++;}
		if((str1[i]!='\0')&&(str1[i]!=str2[j+1])){k=0;i=0;}
		if(str1[i]=='\0')break;
	
	}
	a=j-k+1;
printf("%d\n",a);
        return 0;
}