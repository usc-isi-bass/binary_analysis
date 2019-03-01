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
int n,i,j,la,lb,m;
char a[1000],b[1000],c[1000];
scanf("%d\n",&n);
 for(i=1;i<=n;i++)
 {
 scanf("%s",a);
 scanf("%s",b);
  la=strlen(a);
  lb=strlen(b);
     for(j=la-1;j>=0;j--)
	 {
		 if(j>=la-lb)
		 {
           if(a[j]>=b[j-la+lb]) c[j]=a[j]-b[j-la+lb]+48;
	       else if(a[j]<b[j-la+lb]) 
		   {
	          c[j]=10+a[j]-b[j-la+lb]+48;
		      a[j-1]=a[j-1]-1;
		   }
		 }
		 else c[j]=a[j];
	 }
	 c[la]=0;
	 for(j=0;j<la;j++)
		 if(c[j]!=48){m=j;break;}
		 for(j=m;j<la;j++)
			 printf("%c",c[j]);
printf("\n");
 }
}
