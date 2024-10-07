#include ".assignment/test.h"

void swap(int &lhs,int &rhs)
{
    int t = lhs;
    lhs = rhs;
    rhs =t;
}

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
     if(a>b)
    {
        swap(a,b)

        if(b>c)
        {
            swap(b,c)

        }
        if(a>b)
        {
            swap(a,b)
        }
    }
     else if (b > c) 
    {
        swap(b, c);
        if(a > b)
        {
            swap(a, b);
        }
    }
    result.min = a;
    result.mid = b;
    result.max = c; 
}
