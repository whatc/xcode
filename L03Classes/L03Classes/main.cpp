//
//  main.cpp
//  L03Classes
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    
    //子类对象
    Man *m = new Man();
    
    //子类继承父类的方法
    m->sayHello();
    
    delete m; //销毁对象
    return 0;
}
