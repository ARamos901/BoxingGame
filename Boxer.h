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
    int HP;
    // damage
    int DMG;
    //quickness
    int QCK;
    //defense
    int DEF;
};
//Boxer's who are defined in BoxerStats.cpp
extern Boxer RayStevens;
extern Boxer FrankRodgers;
extern Boxer JayNeil;
extern Boxer IssacXaiver;

void printBoxerNames();
void InitBoxers();

#endif
