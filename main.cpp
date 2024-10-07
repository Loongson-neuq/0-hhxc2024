#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
     int min, mid, max;
    if(a <= b && a <= c) 
    {
        min = a;
        if(b <= c)
        {
            mid = b;
            max = c;
        } 
        else
        {
            mid = c;
            max = b;
        }
    }
    else if(b <= a && b <= c)
    {
        mid = b;
        if(a <= c)
        {
            min = a;
            max = c;
        } else 
        {
            min = c;
            max = a;
        }
    }
    else 
    {
        mid = c;
        if(a <= b)
        {
            min = a;
            max = b;
        }
        else 
        {
            min = b;
            max = a;
        }
    }
    result.min = min;
    result.mid = mid;
    result.max = max;
}
