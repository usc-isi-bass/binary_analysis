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



main()
{
int len,i,P=0;
int panel=0;
char a[100];
int b[100];
int p[100];

scanf("%s",a);
len=strlen(a);

for(i=0;i<=len-1;i++)
                   {
                   b[i]=a[i]-'0';
                   //printf("%d",b[i]);
                   }
for(i=0;i<=len-1;i++)
                   {
                   panel=10*panel+b[i];
                   p[i]=panel/13;
                   if(p[i]!=0)
                   P=1;
                   panel=panel-p[i]*13;
                   if(P==0)
                              continue;
                   else
                       printf("%d",p[i]);
                   }
if(P==0)
printf("0");
printf("\n%d",panel);

}
