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
 int n,i,j;
 char a[1000][255];
scanf("%d",&n);
 for(i=0;i<n;i++)
{
 scanf("%s",a[i]);
for(j=0;a[i][j]!='\0';j++)
{
  if(a[i][j]=='A')
  printf("%c",'T');
if(a[i][j]=='T')
  printf("%c",'A');
  else if(a[i][j]=='G')
  printf("%c",'C');
 else  if(a[i][j]=='C')
  printf("%c",'G');
 
}printf("\n");
 }
return 0;
}

  
 

 
