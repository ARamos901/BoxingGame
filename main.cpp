//
//  main.cpp
//  BoxingGame
//
//  
//
#include <iostream>
#include <string>
#include "Boxer.h"

void PrintBoxerStats(std::string BoxerName);
void InitBoxers();


int main() {
    InitBoxers();
    
    Boxer User=userSelectBoxer();
    
    std::cout<<"You picked: "<< User.name;
 
    
    
    //printBoxerNames();

    return 0;
}
