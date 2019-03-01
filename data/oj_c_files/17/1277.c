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
char a[105];
while((gets(a))!=NULL)
{
printf("%s\n",a);
for (int i=0;a[i]!=0;i++)
   {
   if (a[i]=='(') 
     a[i]='$';
   else if (a[i]==')') 
        {
        a[i]='?';
        for (int j=i-1;j>=0;j--)
           if (a[j]=='$') 
           {
           a[j]=' ';
           a[i]=' ';
           break;
           }
        }  
        else a[i]=' ';
   }
printf("%s\n",a);
}
}
