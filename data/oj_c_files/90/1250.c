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

int put(int ,int);
int main()
{
    int apple,plate,n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>apple>>plate;
        cout<<put(apple,plate)<<endl;
    }
    return 0;
}

int put(int apple,int plate)
{
   if(plate==1 || apple==1) return 1;
   if(apple<plate) return put(apple,apple);
   if(apple==plate) return put(apple,plate-1)+1;
   return put(apple-plate,plate)+put(apple,plate-1);
}
