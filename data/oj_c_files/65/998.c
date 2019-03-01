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
int i;
int a[200][2];
int ascore=0,bscore=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i][0]);
scanf("%d",&a[i][1]);
if(a[i][0]==0&&a[i][1]==1)ascore++;
if(a[i][0]==0&&a[i][1]==2)bscore++;
if(a[i][0]==1&&a[i][1]==0)bscore++;
if(a[i][0]==1&&a[i][1]==2)ascore++;
if(a[i][0]==2&&a[i][1]==0)ascore++;
if(a[i][0]==2&&a[i][1]==1)bscore++;
}
if(ascore>bscore)printf("A");
if(bscore>ascore)printf("B");
if(ascore==bscore)printf("Tie");
}