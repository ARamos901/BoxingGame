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
#include <algorithm>
#include <cctype>

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
        
        //gets the entrie line of user entry
        std::getline(std::cin,stringErrorChecker);
        
        // converts user input to lowercase
        std::string lowerInput = stringErrorChecker;
        std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);
        
        
        
        // sees if it can convert the string to integer as a choice, otherwise it is set to -1
        if (stringErrorChecker.empty() || stringErrorChecker==""|| stringErrorChecker==" ") {
            choice = -1; // Invalid input
        } else {
            try {
                choice = std::stoi(stringErrorChecker);
            } catch (const std::exception&) {
                choice = -1; // Invalid input if conversion fails
            }
        }
        
        std::this_thread::sleep_for(std::chrono::seconds(2));
        
        // based on what the user picks, assign the user's boxer
        if (choice == 1 || lowerInput == "ray stevens") {
            UserBoxer = RayStevens;
        } else if (choice == 2 || lowerInput == "frank rodgers") {
            UserBoxer = FrankRodgers;
        } else if (choice == 3 || lowerInput == "jay neil") {
            UserBoxer = JayNeil;
        } else if (choice == 4 || lowerInput == "issac xaiver") {
            UserBoxer = IssacXaiver;
        } else {
            // error checker to make sure user choice is valid
            std::cout<<"That was an invalid choice. Please choose again \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;
        }
        
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
