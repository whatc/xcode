//
//  main.cpp
//  L13Ref
//
//  Created by iwan on 16/4/14.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <iostream>

//C++引用

class Point{
private:
    int x,y;
    
public:
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    
    //引用
    void add(Point &p){
        this->x+=p.x;
        this->y+=p.y;
        
    }
    
}

int main(int argc, const char * argv[]) {
    
    Point p(1,1);
    p.add(Point(2,3));
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
