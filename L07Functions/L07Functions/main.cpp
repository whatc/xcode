//
//  main.cpp
//  L07Functions
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  虚函数： virtual + 函数名，      作用：实现方法的重写
//  纯虚函数：virtual + 函数名 = 0;  作用：定义抽象方法

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    
    People *p = new Man(21);
    p->sayHello();
    p->eat();
    

    return 0;
}
