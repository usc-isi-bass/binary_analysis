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
	char s[1000];
    int i=0,j=0,c=0,m=0,n=0,d=10,a,x;
	scanf("%s",&a);
	x=getchar();
    gets(s);
	

    while(s[i]!='\0')
	{
     while(s[i]!=' '&&s[i]!='\0')
	 {
        j++;
        i++;
	 }
	 if(j>c)
	 {
		 m=i-j;
		 c=j;
	 }
	 if(j<d)
	 {
		 n=i-j;
		 d=j;
	 }
	 while(s[i]==' ')
	 {
      i++;
      j=0;
	 }
	}
	while(s[m]!=' '&&s[m]!='\0')
	{
		printf("%c",s[m]);
		m++;
	}
	printf("\n");
	while(s[n]!=' '&&s[n]!='\0')
	{
		printf("%c",s[n]);
		n++;
	}
	return 0;
}
