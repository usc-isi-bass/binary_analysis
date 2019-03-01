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
 int n,i;
 float a,b,c;
 float x,y,z;
 scanf("%d",&n);
 scanf("%f%f",&x,&y);
 z=y/x;
 for(i=0;i<n-1;i++)
 {
  scanf("%f%f",&a,&b);
  c=b/a;
  if(20*(c-z)>1)
  printf("better\n");
  else
  {if(20*(z-c)>1)
  printf("worse\n");
  else
  printf("same\n");}
 }
 }
