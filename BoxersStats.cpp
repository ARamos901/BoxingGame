//
//  BoxersStats.cpp
//  BoxingGame
//
//  
//
#include "Boxer.h"
#include <iostream>

Boxer RayStevens;
Boxer FrankRodgers;
Boxer JayNeil;
Boxer IssacXaiver;

void InitBoxers(){
    
    // initialize Boxer:Ray Stevens
    RayStevens.name="Ray Stevens";
    RayStevens.HP=265;
    RayStevens.DMG=30;
    RayStevens.QCK=35;
    RayStevens.DEF=65;
    
    // initialize Boxer: Frank Rodgers
    FrankRodgers.name="Frank Rodgers";
    FrankRodgers.HP=200;
    FrankRodgers.DMG=75;
    FrankRodgers.QCK=45;
    FrankRodgers.DEF=50;
    
    // initialize Boxer:Jay Neil
    JayNeil.name="Jay Neil";
    JayNeil.HP=170;
    JayNeil.DMG=45;
    JayNeil.QCK=75;
    JayNeil.DEF=40;
    
    // initialize Boxer:Issac Xaiver
    IssacXaiver.name="Issac Xaiver";
    IssacXaiver.HP=220;
    IssacXaiver.DMG=55;
    IssacXaiver.QCK=55;
    IssacXaiver.DEF=55;
    
}
