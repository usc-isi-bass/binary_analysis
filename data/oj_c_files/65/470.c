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

int main(){
  int n;
  int a[200],b[200];
  int s1=0,s2=0;
  scanf("%d\n",&n);
  int i;
  for(i=0;i<n;i++){
  scanf("%d %d",&a[i],&b[i]);
  if((a[i]==0)&&(b[i]==2))
  {s2++;}
  else if((a[i]==2)&&(b[i]==0))
  {s1++;}
  else{
      if(a[i]<b[i])
      {s1++;}
      else if(a[i]>b[i])
	  {s2++;}
	  else{
		  s1++;s2++;}
  }}
  if(s1>s2)
  {printf("A");}
  else if(s1<s2)
  {printf("B");}
  else
  {printf("Tie");}


return 0;}