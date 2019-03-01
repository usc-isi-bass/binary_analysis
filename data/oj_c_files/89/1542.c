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

int main(int argc, char * argv[])
{
    int person[10000];
    int number,a,b,i;
    cin >> number;

    for(i=0;i<number;i++)
        person[i]=0;

    for(i=0;;i++)
  {
    cin >> a >> b;
    if(a==0 && b==0) break;
    person[a]=-1;
    if(person[b]!=-1)person[b]++;
  }

    for(i=0;i<number;i++)
  { 
      if(person[i]==number-1)
      {  cout <<i<< endl;
         break;
      }
  }
    if(i==number)
        cout <<"NOT FOUND"<< endl;
    return 0;
}