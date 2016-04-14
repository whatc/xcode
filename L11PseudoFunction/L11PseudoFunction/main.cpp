//
//  main.cpp
//  L11PseudoFunction
//
//  Created by iwan on 16/4/13.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  伪函数，使用关键字operator定义
#include <iostream>


//void hello(){
//    printf("hello\n");
//}


class Hello{

public:
    //第一个()是运算符，第二个()是参数
    void operator()(){
        printf("Hello CPP\n");
    
    }
};






int main(int argc, const char * argv[]) {
    
    
    //实例
    Hello h;
    h();  //把()当成函数来用，实际上并没有函数名
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
