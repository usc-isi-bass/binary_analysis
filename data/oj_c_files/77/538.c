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

int counter=0;
void match()
{
    char temp;
    temp=cin.get();
    int num1=counter++;
    while(cin.peek()==temp)
        match();
    cin.get();
    cout<<num1<<' '<<counter++<<endl;
}


int main()
{
    match();
    return 0;
}
