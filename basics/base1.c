#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
    /* code */
    printf("hello world");
    printf("int 存储大小 : %lu \n", sizeof(int));
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
    return 0;
}


/*
数据类型
1. 基本类型：它们是算术类型，包括两种类型：整数类型和浮点类型。
2. 枚举类型：它们也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。
3. void 类型：类型说明符 void 表明没有可用的值。
4. 派生类型：它们包括：指针类型、数组类型、结构类型、共用体类型和函数类型。
*/