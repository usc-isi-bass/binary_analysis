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
  int a,b,c;                  //??A`B`C????a`b`c,???0-2
  char S[3];                  //??????S???
  for (a=0;a<3;a++)           //????a`b`c??
  {
    for (b=0;b<3;b++)
    {
      for (c=0;c<3;c++)
      { 
        int x=2,y=2,z=2;      //??????A`B`C?????
        if (b>a)              //???????,???????,???????????1
        {
          x=x-1;
          z=z-1;
        }
        if (a==c)
          x=x-1;
        if (b<a)
          y=y-1;
        if (a>c)
          y=y-1;
        if (c>b)
          z=z-1;    
        if (a==x&&b==y&&c==z) //???????????????
        {
           S[a]='A';          //???????????A`B`C??S[3]
           S[b]='B';
	   S[c]='C';
        }
      }
    }  
  } 
  cout<<S[0]<<S[1]<<S[2];     //????????????A`B`C
  return 0;
}