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

struct Student {
        int ID;
        int chinese;
        int maths;
        int sum;
};
int main() {
        struct Student stu[3],t;        //????????
        stu[0].sum =stu[1].sum =stu[2].sum =0;  //???????0
        int i, n;
        cin >> n;
        for (i = 0; i < n; i++) {
                cin >> t.ID >> t.chinese >> t.maths;
                t.sum = t.chinese + t.maths;
                // ????????????
                if(t.sum>stu[0].sum){
                        stu[2] = stu[1];        //????????????????
                        stu[1] = stu[0];
                        stu[0] = t;
                } else if(t.sum>stu[1].sum){    //???????????
                        stu[2] = stu[1];                //???????????????
                        stu[1] = t;
                } else if(t.sum>stu[2].sum){    //???????????
                        stu[2] = t;                     //??????????
                }
        }
        //?????????????
        for (i = 0; i < 3; i++) {
                cout << stu[i].ID << " " << stu[i].sum << endl;
        }
        return 0;
}
