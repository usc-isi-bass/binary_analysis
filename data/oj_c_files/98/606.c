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
 int i,n,sum=0;
 char letter[1000][41]={""};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s",(letter+i));
 }
 for(i=0;i<n;i++)
 {
  if(i!=n-1)
  {if(sum==79||((sum+strlen(letter[i]))>80))
  {printf("\n");sum=0;i--;}
  else
  {
   if((sum+strlen(letter[i])+1+strlen(letter[i+1]))>80)
   {sum+=strlen(letter[i]);
   printf("%s",letter[i]);sum++;}
   else{
       sum+=strlen(letter[i]);
   printf("%s ",letter[i]);sum++;
       }
  }}
  else
  printf("%s",letter[i]);
 }
}
