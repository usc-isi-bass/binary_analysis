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

int Reverse(int num);
int main()
{
    int i,num;
    for (i=1;i<=6;i++)
     {
       cin>>num; //?? 
       cout<<Reverse(num)<<endl; //???? 
     }
return 0;
} 
int Reverse(int num)
{
    int width,i,RevNum;
    width=log10((double)(abs(num)))+1;  //???? 
    i=0;RevNum=0;
    if (num>0)
    {
	    while(num>0)                          //??n???????? 
	      {i++;
	      RevNum=RevNum+(num % 10)*(int)(pow(10.0,width-i));
	       num=num/10;
	      }
        return(RevNum);
     }
     else if (num<0)
     {
	    num=-num; //?????????????? 
        while(num>0)                          //??n???????? 
	      {i++; 
	      RevNum=RevNum+(num % 10)*(int)(pow(10.0,width-i)); 
	       num=num/10;
	      }
        return(-RevNum);
     }
     else if (num==0) return 0;
}
