#include <stdio.h>

// 函数指针
// 函数指针是指向函数的指针变量。
// 通常我们说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。
// 函数指针可以像一般函数一样，用于调用函数、传递参数。

typedef int (*fun_ptr)(int, int);

int max(int x, int y)
{
    return x > y ? x : y;
}

void func1()
{
    /* p 是函数指针 */
    int (*p)(int, int) = &max;// &可以省略
    int a, b, c, d;

    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);
    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = p(p(a, b), c); 
    printf("最大的数字是: %d\n", d);
}

int main(int argc, char const *argv[])
{
    /* code */
    func1();
    return 0;
}
