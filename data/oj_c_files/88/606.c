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
    char s[31];
    cin.getline(s,31);                     //??????????
    int len=strlen(s);                     //????
    int flag=0;
    for(int i=0; i<len; i++)
    {
        if(*(s+i)>='0'&&*(s+i)<='9')   {cout<<*(s+i);flag++;}      //???????????????1
        else if(*(s+i+1)>=0&&*(s+i+1)<='9'&&flag)  cout<<endl;  //????????????????????????????????????
    }
    return 0;
}
