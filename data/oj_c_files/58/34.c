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
	int n,i,j,k;
    char *p,s[100][82];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
	{  
		gets(s[i]);
   k=0;
   p=s[i];
   {if(((int)*p>64&&(int)*p<91)||((int)*p>96&&(int)*p<123)||*p=='_')  k=k+0;
       else   k=k+1;}
   p++;
for(;*p!='\0';p++)
{  if(((int)*p>64&&(int)*p<91)||((int)*p>96&&(int)*p<123)||*p=='_'||((int)*p>47&&(int)*p<58)) k=k+0;
else k=k+1;}
if(k==0) printf("1\n");  else if(k>0)  printf("0\n");
free(*p);
}
}