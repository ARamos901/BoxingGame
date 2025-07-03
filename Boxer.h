//
//  Boxer.h
//  BoxingGame
//
//  
//
#ifndef BOXER_H
#define BOXER_H
#include <string>

//Boxer Struct
struct Boxer {
    //Boxer attribuites
    
    //name
    std::string name;
    //healthpoints
    short unsigned int HP;
    // damage
    short unsigned int DMG;
    //quickness
    short unsigned int QCK;
    //defense
    short unsigned int DEF;
};
//Boxer's who are defined in BoxerStats.cpp
extern Boxer RayStevens;
extern Boxer FrankRodgers;
extern Boxer JayNeil;
extern Boxer IssacXaiver;

void printBoxerNames();
void InitBoxers();
Boxer userSelectBoxer();


#endif
