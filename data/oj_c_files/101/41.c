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
   int words[3],i,a,b,c;//words[3]???????????i?????a,b,c??????
   char rank[3];    //rank[3]????????????
   for(a=0;a<3;a++)  //?????????????
  {
       for(b=0;b<3;b++)
      {
           for(c=0;c<3;c++)
          {
           words[a]=(b>a)+(c==a);
           words[b]=(a>b)+(a>c);
           words[c]=(c>b)+(b>a);
           if(words[0]>words[1] && words[1]>words[2])
             {
              rank[a]='A';  //????????????????????
              rank[b]='B';
              rank[c]='C';
              for(i=0;i<3;i++)
              cout<<rank[i];//???????????????
              }   
          }   
  }     }
  return 0;
}