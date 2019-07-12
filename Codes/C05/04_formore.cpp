// formore.cpp -- more looping with for

#include <iostream>

const int Arsize = 16;
int main()
{
    long long factorails[Arsize];           // 创建数组，用于存放阶乘值。
    factorails[1] = factorails[0] = 1LL;    // 数值后面加"LL"，表明数值为long long类型。
    for (int i = 2; i < Arsize; i++)
        factorails[i] = i * factorails[i - 1];
    for (int i = 0; i < Arsize; i++)
        std::cout << i << "! = " << factorails[i] << std::endl;

    std::cin.get();
    return 0;
}