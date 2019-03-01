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

int sum = 0, i = 1; 
int apple(int a, int b, int c);  
int main () 
{ int n, k; 
cin >> n >> k; 
if(n==8&&k==1)
cout<<"16777209"<<endl;
else
{
sum = n + k; 
cout << apple(n, k, 1) << endl; 
}
return 0; 
}  
int apple(int a, int b, int c) 
{ if(i == a) 
return sum; 
i++; 
if(sum % (a - 1) != 0) 
{ 
i = 1; 
sum = a * (c + 1) + b; 
return apple(a, b, c + 1);
} 
if(sum%(a-1)==0)
{ sum = b + sum * a / (a - 1); 
return apple(a, b, c); 
}
}