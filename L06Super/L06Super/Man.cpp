//
//  Man.cpp
//  L03Classes
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include "Man.hpp"

//man 1
//woman 0

//实现Man构造方法，并把age的值传递给父类age
Man::Man(int age):People(age,1){
    
//    People::sayHello(); //执行父类的sayHello()

}

//实现sayHello()方法
void Man::sayHello(){
    People::sayHello(); //执行父类的sayHello()
    
    printf("Man say : Hello CPP\n");
}