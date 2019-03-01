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
  int d[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int a,b,c,i;
  int s = 1,t = 0;
  char w[7][6]={{'S','u','n','.'},{'M','o','n','.'},{'T','u','e','.'},{'W','e','d','.'},{'T','h','u','.'},{'F','r','i','.'},{'S','a','t','.'}};
  scanf("%d%d%d",&a,&b,&c);
  for(i = 1;i <= 400;i++)
  {
    t+=365;
    if(i%400 && i%100 == 0 || i%4);
    else t++;
    t%=7;
  }
  s +=((a-1)/400*t);
  for(i = 1;i <= (a-1)%400; i++)
  {
    s+=365;
    if(i%400 && i%100 == 0 || i%4);
    else s++;
    s%=7;
  }
  if(a%400 && a%100 == 0 || a%4);
  else d[2]++;
  for(i = 1;i < b; i++)
     s += d[i];
  s += c;
  s--;
  s%=7;
  printf("%s\n",w[s]);
  return 0;    
}
