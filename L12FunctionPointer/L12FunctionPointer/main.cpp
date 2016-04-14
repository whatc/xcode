//
//  main.cpp
//  L12FunctionPointer
//
//  Created by iwan on 16/4/13.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>


class Object;


typedef void(Object::*SayHi)();             //自定义类型
typedef void(Object::*CallaterHandler)();   //自定无参数无返回值的类型

//
void threadFunc(Object *target,CallaterHandler handler,int delay){
    sleep(delay);
    (target->*handler)();
}

//延时执行,arg1:目标，arg2:延时方法，arg3:时长
void callater(Object *target,CallaterHandler handler,int delay){
    
    std::thread t(threadFunc,target,handler,delay);
    
    t.join();
    
}



class Object{

public:
//    void(Object::*sayHi)(); //函数指针
    SayHi sayHi;
};


//继承Object类
class Hello:public Object{

    //构造
public:
    Hello(){
        
        callater(this,(CallaterHandler)(&Hello::HelloSayHi),3 );
        
        
        
//        //类型强转（无返回值无参数的Object指针类型）
////        sayHi = (void(Object::*)())(&Hello::HelloSayHi);
//        sayHi = (SayHi)(&Hello::HelloSayHi);
//        //取值符*
//        (this->*sayHi)();
        
    }
        //函数
    void HelloSayHi(){
        printf("Hello CPP\n");
    }

};







int main(int argc, const char * argv[]) {
    
    Hello *h = new Hello(); //实例
    
    delete h;               //销毁
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
