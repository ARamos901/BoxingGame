//
//  BoxingGame.cpp
//  BoxingGame
//
//
//Main Game functions

#include <iostream>
#include "Boxer.h"

//prints Boxer's stats
void printStats(const Boxer& b) {
    std::cout << "Name: " << b.name << "\n"
              << "HP: " << b.HP << "\n"
              << "DMG: " << b.DMG << "\n"
              << "QCK: " << b.QCK << "\n"
              << "DEF: " << b.DEF << "\n";
}

//prints Boxer's names
void printBoxerNames(){
    //prints name for Ray Stevens
    std::cout<<"Boxer 1:"<<RayStevens.name<<std::endl;
    std::cout<<"____________________"<<std::endl;
    //prints name for Frank Rodgers
    std::cout<<"Boxer 2:"<<FrankRodgers.name<<std::endl;
    std::cout<<"____________________"<<std::endl;
    //prints name for Jay Neil
    std::cout<<"Boxer 3:"<<JayNeil.name<<std::endl;
    std::cout<<"____________________"<<std::endl;
    //prints name for Issac Xaiver
    std::cout<<"Boxer 4:"<<IssacXaiver.name<<std::endl;
}
