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
int a[100]; 
int k; 
scanf("%d",&k); 
for(int i=0 ;i < k;i++){ 
scanf("%d", &(a[i])); 
} 
for(int j=0;j<k-1;j++) 
for(int i=0;i<k-1-j;i++) 
{ 
if(a[i]<=a[i+1]) 
{ 
int p=a[i]; 
a[i]=a[i+1]; 
a[i+1]=p; 
} 
} 
printf("%d\n%d",a[0],a[1]); 
return 0; 
} 