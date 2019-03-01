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
int i,j;
void dao(char x[],int y);
char a[1000];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
if(a[i+1]==' ')
{dao(a,i);

i--;}
}
}
for(i=0;a[i]!='\0';i++)
printf("%c",a[i]);

}
void dao(char x[], int y)
{
     int j;
 
for(j=y;x[j]!='\0';j++)
{
x[j]=x[j+1];}

}