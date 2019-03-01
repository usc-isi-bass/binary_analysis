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
 char a[20],b[20];int i,j,c,d;
 scanf("%s%s",a,b);
 c=strlen(a);d=strlen(b);
 if(c!=d)printf("NO");
 else {
for(i=0;a[i]!=0;i++)
 {for(j=0;b[j]!=0;j++)
	   if(a[i]==b[j])
		 { b[j]='0';break;}
	   if(b[j]==0)
	   {printf("NO");break;break;}
 }
 printf("YES");}
}

 	 

