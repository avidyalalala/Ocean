//
//  main.cpp
//  helloworldc++
//
//  Created by houlina02 on 15/11/19.
//  Copyright (c) 2015年 houlina02. All rights reserved.
//

#include <iostream>
#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    
    Sales_item book;
    std::cin >> book;
    std::cout<< book <<std::endl;
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void test_input(){
    std::cout<<"Please enter numbers: " <<std::endl;
    int sum=0,value=0;
    while (std::cin >> value) {
        sum+=value;
    }
    std::cout<<"Sum is: " << sum <<std::endl;
    
}
