//
//  main.cpp
//  L09Overload
//
//  Created by iwan on 16/4/13.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  函数重载, 函数名相同，参数不同

#include <iostream>


class Hello{
    
public:
    void sayHello(){
        printf("Hello yanwanfu\n");
    }
    
    //  函数重载
    //  char *name 这是C语言的写法
    void sayHello(char *name){
        printf("C Hello %s\n...",name);
    }
    
    
    //  函数重载
    //  std::string name 这是C++的写法
    void sayHello(std::string name){
        std::string str = "C++ Hello ";
        str+=name;
        
        //C++标准输出
        std::cout<<str<<"\n";
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    
    Hello *h = new Hello();
    
//    h->sayHello();// 没有参数执行第一个函数
    

//    std::string name = "zhangsan";      //C++字符串
//    h->sayHello((char*)name.c_str());   //.c_str(): c语言的字符串，结果强转成char *
    
    
    h->sayHello("LiSi");
    
    
    return 0;
}
