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
char p;
int max,submax=-1,i,a;
scanf("%d",&a);
max=a;
scanf("%c",&p);
while(p==',')
{
scanf("%d",&a);
if(max<a)
{
submax=max;
max=a;
}
else if(submax<a&&a!=max)
{
submax=a;
}scanf("%c",&p);

}
if(submax==-1)
{
printf("No");
}
else
{
printf("%d",submax);
}
return 0;
}
