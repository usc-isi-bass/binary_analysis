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

int PlaceApple(int,int);
int main()
{
	int Apple,Plate,t;
	cin>>t;
	while(t--)
	{
		cin>>Apple>>Plate;
		cout<<PlaceApple(Apple,Plate)<<endl;
	}
}
int PlaceApple(int AppleNumber, int PlateNumber)
{
    if(AppleNumber < 0 || PlateNumber == 0)
        return 0;
    if(AppleNumber == 1 || AppleNumber == 0 || PlateNumber == 1)
        return 1;
    int sum=0;
    for(int i = 0; i <= AppleNumber/PlateNumber; i++)
        sum += PlaceApple(AppleNumber - PlateNumber *i, PlateNumber - 1);
    return sum;
}