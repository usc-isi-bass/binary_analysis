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

int main(int argc, char* argv[])
{
int  j,n,len2;
char a[100],b[100];     
scanf("%s %s",a,b);

len2=strlen(b);

for(j=0;j<len2;j++)
  {
if(a[0]==b[j]&&a[1]==b[j+1]&&j!=6)
{               
printf("%d",j);
}
}

return 0;
} 