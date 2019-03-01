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
char a[100];
int i,j;
gets(a);
char b[100][100];
int count=-1;
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
count++;
for(j=0;a[i+j]!=' ';j++)
b[count][j]=a[i+j];
i=i+j-1;
}
}
for(i=count;i>=0;i--)
{
if(i!=0)
printf("%s ",b[i]);
else
printf("%s",b[i]);
}
}