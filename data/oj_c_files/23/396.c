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
 char a[100];
 int c[100][2]={0};
 int i,j,k,l;
 cin.getline(a,1000);
 l=strlen(a);
 k=0;
 i=0;
for(i=0;i<l;i++)
 {if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0'))
    {c[k][1]=i+1;
     k++;}
  if(a[i]==' '&&a[i+1]!=' ')
    {c[k][0]=i+1;}}
for(i=k-1;i>0;i--)
 {for(j=c[i][0];j<c[i][1];j++)
  cout<<a[j];
  cout<<" ";}
for(j=c[0][0];j<c[0][1];j++)
  cout<<a[j];
  cin.get();cin.get();cin.get();
return 0;
}
