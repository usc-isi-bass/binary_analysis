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

int Boy[100],Girl[100],BoyNum,GirlNum;
char Boychar;
void function(int);
int main()
{
 BoyNum=1;
 GirlNum=0;
 Boy[BoyNum]=0;
 Boychar=cin.get();
 function(1);
 return 0;
}
void function(int p)
{
 char c;
 c=cin.get();
 if(c=='\n')
  return;
 else
  if(c==Boychar)
  {
   Boy[BoyNum]=p;
   BoyNum++;
   GirlNum++;
   function(p+1);
  }
  else
  {
   Girl[GirlNum]=p;
   cout<<Boy[GirlNum]<<" "<<Girl[GirlNum]<<endl;
   GirlNum--;
   BoyNum--;
   function(p+1);
  }
}