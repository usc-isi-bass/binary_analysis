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

//**************
//*??????*
//*1000010538  *
//**************
int main()                                                                    //???
{
 int A,B,C,words[3],rank[4],i;
 char person[4]={0};                                                        //?????????
 for(A=1;A<4;A++)                                                           //?????????
 {   for(B=1;B<4;B++)
 {   if(A==B)  continue;                                                  //??????????????
      C=6-A-B;
   words[0]=(B>A)+(C==A);                                                 //?words???????????
   words[1]=(A>B)+(A>C);
   words[2]=(C>B)+(B>A);
   rank[A]=0;                                                             //?A,B,C????????
   rank[B]=1;
   rank[C]=2;                                                               
   if(words[rank[1]]==2&&words[rank[2]]==1&&words[rank[3]]==0)              //??????????????                ??   
    for(i=1;i<=3;i++)
    {   person[i]=rank[i]+65;                                           //?person????A,B,C???
        cout<<person[i];
    }
    }
 }
 return 0;                                                                   //??????????????????
}                                                                                //????
