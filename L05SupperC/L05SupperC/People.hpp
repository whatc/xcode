//
//  People.hpp
//  L01OOP
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>

//定义一个类
class People{
    
    //私有属性
private:
    int age;
    int sex;
    
    //公开方法
public:
    People();   // 默认的构造方法
    People(int age,int sex);    //  有参数的构造方法
    int getSex();
    int getAge();
    void sayHello();
    
    
};



#endif /* People_hpp */
