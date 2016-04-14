//
//  main.cpp
//  L10Operator
//
//  Created by iwan on 16/4/13.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

//  运算符重载  关键字：operator

#include <iostream>


class Point{
private:
    int x,y;
    
public:
    //构造方法
    Point(int x,int y){
        this->x = x;
        this->y = y;
    };
    
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    
    //相加
    void add(int x,int y){
        this->x+=x;
        this->y+=y;
    }
    
    //重写add方法
    void add(Point p){
        //调用第一个add方法
        add(p.getX(),p.getY()); //值相加
    }
    
    //重载运算符 关键字：operator
    void operator+=(Point p){
        add(p);
    }
    
};

//构造方式调用重载运算符
void cons(){
    Point p(10,11);         //直接使用构造
    //p.add(Point(33, 55));
    p+=Point(99,77);        //使用运算符重载方法(对象+对象)
    
    std::cout<< p.getX() <<"," <<p.getY()<<"\n";

}

//指针方式调用重载运算符
void mPointer(){
    Point *p = new Point(3,5);
    (*p)+=Point(2,3); //(*p): 取指针p的值，
    
    std::cout<<p->getX()<<","<<p->getY()<<"\n";

}

int main(int argc, const char * argv[]) {
    
    
//    cons();
    mPointer();
    
    return 0;
}
