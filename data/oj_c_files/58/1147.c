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

main ()
{
int a,i,j,x,y=0,z;
char s[81];
char c;
scanf("%d",&a);
getchar();
for (i=1;i<=a;i++)
{

    gets(s);
    x=1;
    for (j=0;s[j]!='\0';j++)
    {
        if(j==0 && !(s[j]>='A'&&s[j]<='Z') && !(s[j]>='a'&&s[j]<='z') && s[j]!='_')
         {
             x = 0;
             break;
         }
        else if(j>0 && !(s[j]>='A'&&s[j]<='Z') && !(s[j]>='a' && s[j]<='z') && s[j]!='_' && !(s[j]>='0' && s[j]<='9'))
        {
           x = 0;
           break;
       }
      
    }
printf("%d\n",x);
 }
}
