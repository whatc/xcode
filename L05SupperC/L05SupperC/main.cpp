//
//  main.cpp
//  L05SupperC
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

//子类执行父类的构造方法


int main(int argc, const char * argv[]) {
    
    Man *m = new Man(20);
    
    printf("age=%d\n",m->getAge());
    
    delete m;
    return 0;
}
