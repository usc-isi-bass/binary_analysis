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


int main ()
{
int max, i, max_index;
char str1[20], str2[20];
while (scanf("%s%s", str1, str2)!=EOF)
{
	int ans[20]={0};
max=0;
for (i=1;str1[i];i++)
if (str1[i]>max) max=str1[i], max_index=i;

strncat (ans, str1, max_index+1);
strcat(ans, str2);
strcat(ans, str1+max_index+1);
printf ("%s\n", ans);
}
return 0;
}