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
    char w[1000],s[100][100],a[100],b[100];
    int i=0,j=0,k=0,d;
    gets(w);
	gets(a);
	gets(b);
    while(w[i]!='\0')
	{
       while(w[i]!=' '&&w[i]!='\0')
	   {
          s[j][k]=w[i];
          i++;
          k++;
	   }
       s[j][k]='\0';
       j++;

	   k=0;
       while(w[i]==' ')
	   {
          i++;
	   }
	}

  for(i=0;i<j;i++)
  {
	   d=strcmp(s[i],a);
       if(d==0)
	   {
		  strcpy(s[i],b);
	   }
  }
    printf("%s",s[0]);
    for(i=1;i<j;i++)
	{
    	printf(" %s",s[i]);
	}
return 0;
}