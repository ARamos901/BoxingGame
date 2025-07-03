//
//  BoxingGame.cpp
//  BoxingGame
//
//
//Main Game functions

#include <iostream>
#include "Boxer.h"
#include <string>
#include "limits"
#include <thread>
#include <chrono>

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
    std::cout<<"\n";
}

Boxer userSelectBoxer(){
    int choice;
    std::string PickConfirmation;
    Boxer UserBoxer;

    while(true){
        
        //user is prompted to choose Boxer
        std::cout<<"Please choose your Boxer.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout<<"1. "<<RayStevens.name<<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"2. "<<FrankRodgers.name<<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"3. "<<JayNeil.name<<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"4. "<<IssacXaiver.name<<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"Please enter the Boxer you would like: ";
        std::string stringErrorChecker;
        
        std::getline(std::cin,stringErrorChecker);;
        
        
        
        
        //this clears the input buffer bc on default after it reads
        // the int choice it leaves a newline charcter in the input buffer
        //which would then throw off the conofirmation logic
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        // Convert string to integer, set to -1 if invalid
                if (stringErrorChecker.empty() || stringErrorChecker==""|| stringErrorChecker==" ") {
                    choice = -1; // Invalid input
                } else {
                    choice = std::stoi(stringErrorChecker);
                }
        
        std::this_thread::sleep_for(std::chrono::seconds(2));
        //based on what the user picks, it will switch the user's boxer
        switch (choice) {
            case 1: UserBoxer=RayStevens;break;
            case 2: UserBoxer=FrankRodgers;break;
            case 3: UserBoxer=JayNeil;break;
            case 4: UserBoxer=IssacXaiver;break;
                //error checking to make sure user choice is valid
            default:
                std::cout<<"That was an invalid choice.Please choose again \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;}
        
        
        //pick confirmation for user
        std::cout<<"You picked: "<< UserBoxer.name <<". Type \"Yes\" to confirm the choice or hit enter to choose again.";
        std::getline(std::cin, PickConfirmation);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if (PickConfirmation=="Yes"|| PickConfirmation=="yes"){
            return UserBoxer;
        }
        else{
            std::cout<<"Okay, picking again.\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
    }
}
