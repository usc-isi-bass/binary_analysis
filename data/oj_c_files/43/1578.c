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
    int number,i,j,f,g,s;
    int k=1;
    scanf("%d",&number);
    int num[20000];
    for(i=2;i<number;i++)
    {  s=i-1;
    for(j=(i-1);j>0;j--)
    {
    if(i%j!=0)
    s--;}
   if(s==1)
   {num[k]=i;
    k++;}}
   for(f=k-1;f>0;f--)
 {
                  for(g=1;g<=f;g++)
                  {if(num[f]+num[g]==number)
                  printf("%d %d\n",num[g],num[f]);}}
  getchar();
  getchar();
  return 0;
}