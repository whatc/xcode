//
//  main.cpp
//  L01OOP
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  C++面向对象使用

#include <iostream>
#include "People.hpp"

////创建一个类,也可以在外部创建一个类
//class People{
//
////创建一个公开的方法
//public:
//    void sayHello(){
//        printf("hello cpp\n");
//    }
//
//};

int main(int argc, const char * argv[]) {
    
    //类对象
    People *p = new People();
    //类方法
    p->sayHello();
    
    //销毁对象
    delete p;
    
    //C语言的分配内存和销毁内存的关键字
    //malloc(sizi_t)
    //free(void *)
    return 0;
}
