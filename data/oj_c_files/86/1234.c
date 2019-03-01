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
    cin >> n;
    const int kMaxSeconds = 60;
    
	for (int i = 0; i < n; ++i)
    {
        int interuptCount;				// ??????   
        int interuptNum;				// ???????????
        cin >> interuptCount;
        
		// lostNum: ???????????
        int lostNum = 0;
        for (int j = 0; j < interuptCount; ++j)
        {
            cin >> interuptNum;             // ??????????????0???? = ??????? + ????????
            int sec = interuptNum + lostNum;
            // ???????????
            //     ??????60???????
            //     ??????60?
            
			if (sec < kMaxSeconds)
                if ((kMaxSeconds - sec) > 3)
					lostNum += 3;
				else
					lostNum += kMaxSeconds - sec;
        }
        cout << kMaxSeconds - lostNum << endl;
    }
	 return 0;
}