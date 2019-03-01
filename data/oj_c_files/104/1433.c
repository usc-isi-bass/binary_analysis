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

int path(int m,int n)
                                       //??????m,n???? 
{   
  if(m==n)                             //?????????? 
    return m;             
  if(m>n)
     m=m/2;  
  else if(m<n) 
  n=n/2;                              //?????????????????? 
  return path(m,n);                   //?? ???? 
}
int main()
{ 
  int x,y;
  cin>>x>>y;                         //??x?y
  cout<< path(x,y);                  //???? 

return 0;
}
