//
//  main.cpp
//  L06Super
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  使用父类的方法

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
  
    
    Man *m = new Man(21);
    m->sayHello();
//    m->People::sayHello(); //执行父类的sayHello（）方法
    
    
    
    return 0;
}
