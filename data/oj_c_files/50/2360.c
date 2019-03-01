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
    int n;
    cin>>n;
    switch(n)
    {case 1:cout<<4<<endl<<7<<endl;break;
     case 2:cout<<9<<endl<<12<<endl;break;
     case 3:cout<<6<<endl;break;
     case 4:cout<<2<<endl<<3<<endl<<11<<endl;break;
     case 5:cout<<8<<endl;break;
     case 6:cout<<5<<endl;break;
     case 7:cout<<1<<endl<<10<<endl;break;
     }
    return 0;
}