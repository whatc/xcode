//
//  Man.hpp
//  L03Classes
//
//  Created by iwan on 16/4/12.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>
#include "People.hpp"

//类的继承
//格式： class 子类名:修饰符 父类名{}
//修饰符public 表示从父类继承过来的成员是公开


class Man:public People {
      
    
public:
    
    Man(int age);   //构造方法
    void sayHello();
    
};



#endif /* Man_hpp */
