// coordin.h -- struct templates and function prototypes
// 头文件中包含结构申明和函数原型。

#ifndef COORDIN_H_      // 预处理器编译指令。当以前没有定义COORDIN_H_时，执行下面内容。
#define COORDIN_H_      // 定义名称为COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif                  // 结束预处理器编译指令。