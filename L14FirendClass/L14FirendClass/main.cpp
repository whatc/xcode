//
//  main.cpp
//  L14FirendClass
//
//  Created by iwan on 16/4/14.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>


class A {
    
    //友元类
    friend class B;
    
private:
    int num;
    
public:
    A(){
        num =10;
    }
};

class B:public A{
    
    
public:
    B(){
        printf("%d\n",num); //访问A类的私有成员
    }
    
};

int main(int argc, const char * argv[]) {
    
    B b;
    
    std::cout << "Hello, World!\n";
    return 0;
}
