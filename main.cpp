//  main.cpp
//  dungeons-dice
//
//  Created by John West on 3/13/19.
//  Copyright © 2019 John West. All rights reserved.
//
// This program simulates the rolling of a dice for Dungeons and Dragons.

#include <iostream>
#include <cstdlib>
#include "Die.h"
using namespace std;

// Function prototypes
void displayMenu();

int main()
{
    int numRolls;
    int dieNum;
    char menuChoice;
    char rollAgain;
    
    
    do
    {
        // Display the Dice Menu.
        displayMenu();
        
        cin >> menuChoice;
        
        // Process the user's menu choice.
        switch(menuChoice)
        {
        case 'a':
        case 'A':  dieNum = 4;
                   break;
        case 'b':
        case 'B':  dieNum = 6;
                   break;
        case 'c':
        case 'C':  dieNum = 8;
                   break;
        case 'd':
        case 'D':  dieNum = 10;
                   break;
        case 'e':
        case 'E':  dieNum = 12;
                   break;
        case 'f':
        case 'F':  dieNum = 20;
                   break;
        case 'g':
        case 'G':  exit(EXIT_SUCCESS);
        }
    
        // Create an instance of the Die class.
        Die die1(dieNum);
        
        // Display the initial state of the die
        cout << die1.getSides() << " sided die locked in.\n";
    
        // Roll the dice x number of times.
        cout << "\nEnter the number of rolls: ";
        cin >> numRolls;
        cout << "\nRolling the die " << numRolls << " time(s)...\n";
    
        for (int count = 0; count < numRolls; count++)
        {
            // Roll the die.
            die1.roll();
            
            //  Display the values of the dice.
            cout << die1.getValue() << endl;
        }
        cout << "Roll again? (Y/N): ";
        cin >> rollAgain;
    }while(rollAgain == 'Y' || rollAgain == 'y');
    
    
    return 0;
}


// Function to display the Dice Menu.
void displayMenu()
{
    cout << "                MENU\n";
    cout << "-------------------------------------\n";
    cout << "A) Four-Sided Die    (d4)\n";
    cout << "B) Six-Sided Die     (d6)\n";
    cout << "C) Eight-Sided Die   (d8)\n";
    cout << "D) Ten-Sided Die     (d10)\n";
    cout << "E) Twelve-Sided Die  (d12)\n";
    cout << "F) Twenty-Sided Die  (d20)\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

