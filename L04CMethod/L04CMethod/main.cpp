//
//  main.cpp
//  L04CMethod
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>

//  构造方法和析构方法

//类
class Object{

    
public:
    //构造方法
    Object(){
    
        printf("Create Object\n");
    }
    
    //析构方法
    //作用：封装要销毁的对象
    ~Object(){
        printf("delete Object\n");
    }

};



int main(int argc, const char * argv[]) {
   
    
    Object *obj = new Object(); //执行构造方法
    
    //Object obj;
    //会同时执行构造和析构方法
    //代码块{}结束时执行销毁内存动作
    
    delete obj;     //执行析构方法
    return 0;
}
