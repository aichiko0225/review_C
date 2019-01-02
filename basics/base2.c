#include <stdio.h>

// 变量声明
extern int a, b;
extern int c;
extern float f;

void func1()
{
    /* 变量定义 */
    int a, b;
    int c;
    float f;
    
    /* 初始化 */
    a = 10;
    b = 20;
    
    c = a + b;
    printf("value of c : %d \n", c);
    
    f = 70.0/3.0;
    printf("value of f : %f \n", f);
}

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

void func2()
{
    int area;  
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
}

void func3() {

}

/* 函数声明 */
void func4(void);
 
static int count = 10;        /* 全局变量 - static 是默认的 */

int main(int argc, char const *argv[])
{
    /* code */
    func1();
    func2();
    while (count--) {
      func4();
    }
    return 0;
}

void func4(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */                
  static int thingy = 5;
  thingy++;
  printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}