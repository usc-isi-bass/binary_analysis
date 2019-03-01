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
 void reverse(int num);//???? 
 int num; 
 for(int i=0;i<6;i++)//???? 
   {
    cin>>num;
    reverse( num );//???? 
    cout<<endl;
   }
 cin.get();cin.get();
 return 0;   
}
void reverse(int num)//?????“?????????int reverse(int num)?”
{
 void fan( int num );//????
 double flag=1,weishu=0,reverse=0;
 if( num < 0 )//??????? 
   {
    num=-num;
    cout<<'-'; 
   }  
 for(;;)//?????0 
   {
        if(num%10 == 0)num/=10;
        else break;
   }
 fan( num );//???????? 
}
void fan( int num )
{
    cout<<num%10;
    if( num / 10 != 0 )fan( num / 10 );//???? 
}