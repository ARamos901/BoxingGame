//
//  main.cpp
//  BoxingGame
//
//  Created by Aiden Ramos on 5/17/25.
//

#include <iostream>
#include <string>
#include "Boxer.h"

void CreateBoxers(){
    
    // initialize Boxer:Ray Stevens
    Boxer RayStevens;
    RayStevens.name="Ray Stevens";
    RayStevens.HP=265;
    RayStevens.DMG=30;
    RayStevens.QCK=35;
    
    // initialize Boxer: Frank Rodgers
    Boxer FrankRodgers;
    FrankRodgers.name="Frank Rodgers";
    FrankRodgers.HP=200;
    FrankRodgers.DMG=75;
    FrankRodgers.QCK=45;
    
    // initialize Boxer:Jay Neil
    Boxer JayNeil;
    JayNeil.name="Jay Neil";
    JayNeil.HP=170;
    JayNeil.DMG=40;
    JayNeil.QCK=75;
    
    // initialize Boxer:Issac Xaiver
    Boxer IssacXaiver;
    IssacXaiver.name="Issac Xaiver";
    IssacXaiver.HP=220;
    IssacXaiver.DMG=55;
    IssacXaiver.QCK=55;
    
};

int main() {
    
    return 0;
}
