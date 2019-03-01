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


// ??????????????????
// ??????i???,?????i??????????????
// maxC[i] = max{maxC[k]|1<=k<i?height[k]<height[i]} + 1
int main()
{
	// height[i]??????i??????
	// maxC[i]??????????i?????????????,?????????????
	int k,height[25],maxC[25] = {0},j,i,max = 0;
	scanf("%d",&k);

	for(i = 0;i < k;i++)
	{
		scanf("%d",&height[i]);
		// maxC[i] = max{maxC[k]|1<=k<i?height[k]<height[i]} + 1
		for(j = 0,max = 0;j < i;j++)
		{
			if(height[j] >= height[i])
				if(maxC[j] > max)
					max = maxC[j];
		}
		if(max == 0) maxC[i] = 1;
		else maxC[i] = ++max;
	}

	for(i= 1,max = 0;i < k;i++)
		if(maxC[i] > max)
			max = maxC[i];
		
	printf("%d\n",max);

	return 0;
}