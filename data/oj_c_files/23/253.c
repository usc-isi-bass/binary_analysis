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

void turn(char *a)
{
 char b[100][200],c[200]="";
 int i,j=0,k,l;
 for(i=0;a[i];i++)
  if(a[i]==' ')
  {
   k=i;
   while(a[k-1]!=' '&&k!=0)
    k--;
   for(l=0;k<i;k++,l++)
    b[j][l]=a[k];
   b[j][l]='\0';
   j++;
  }
         k=i;
   while(a[k-1]!=' '&&k!=0)
    k--;
   for(l=0;k<i;k++,l++)
    b[j][l]=a[k];
   b[j][l]='\0';
   j++;
  strcpy(a,c);
  for(i=j-1;i>=0;i--)
  {
   strcat(a,b[i]);
   strcat(a," ");
   if(i==0)
    strcat(a,"\0");
  }
}
void main()
{
	int r;
    char a[200];
    gets(a);
    r=strlen(a);
    turn(a);
	a[r]=0;
    puts(a);
}