//
//  People.cpp
//  L01OOP
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include "People.hpp"


//实现无参数的构造方法
People::People(){
    this->age = 10;
    this->sex = 1;
    
}

//实现有参数的构造方法
People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

//实现getAge()
int People::getAge(){
    return this->age;
}
//实现getSex()
int People::getSex(){
    return this->sex;
}

void People::sayHello(){
    printf("Hello CPP\n");
}

