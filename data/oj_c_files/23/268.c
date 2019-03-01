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
    int i,j=0,p=0;
    char a[50][50];
   for(i=0;i<50;i++){
   for(j=0;j<50;j++)
   {scanf("%c",&a[i][j]);
   if(a[i][j]==' '||a[i][j]=='\n') break;}
   if(a[i][j]==' ') a[i][j]='\0';
   if(a[i][j]=='\n') {a[i][j]='\0';break;}
}
   printf("%s",a[i]);
   for(p=i-1;p>=0;p--)
   printf(" %s",a[p]);
   return 0;
}
   
    
   
    
