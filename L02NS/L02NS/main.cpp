//
//  main.cpp
//  L02NS
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>
#include "People.hpp"

//使用命名空间
using namespace jikexueyuan;

int main(int argc, const char * argv[]) {
    
    //  用命名空间方式来访问类
    //  jikexueyuan:命名空间
    //  jikexueyuan::People *p = new jikexueyuan::People();
    
    People *p = new People();
    p->sayHello();
    
    //销毁对象
    delete p;
    
    return 0;
}
