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
char c[500];
int x,y,i,j,k,l,m,p=0;
gets(c);
char a[500];
strcpy(a,c);
for(i=0;;i++)
{
if(c[i]=='\0') break;
}

for(k=1;k<i;k++)
{
	for(j=0;c[k+j]!='\0';j++)
{
	p=0;
	strcpy(c,a);
x=c[j];y=c[k+j];
	if(x!=y) p=1;
	
    else for(l=1;x==y;l++)
   {
	   x=c[j+l];
   y=c[k+j-l];
   if(x!=y){p=1; break;}
   else if(j+l>=k+j-l) break;
   }
   if(p==0) 
   {
	   for(m=j;m<=k+j;m++)
	   {
	   printf("%c",c[m]);
	   
	   }
	   printf("\n");
   }
}
}
return 0;
}