#include <iostream>
#include <conio.h>
#include <windows.h>
#include "front-end.h"
#include "Game.h"

//calculating functions;
void Exit()
{
    system("CLS");
}


void Acceleration()
{
    double Velocity1, Velocity0, time, Acceleration;
    std::cout << "Enter Velocity 1: ";
    std::cin >> Velocity1;
    std::cout << "Enter Velocity 0: ";
    std::cin >> Velocity0;
    std::cout << "Enter time: ";
    std::cin >> time;
    Acceleration = (Velocity1 - Velocity0) / time;
    std::cout << "Acceleration = " << Acceleration << " m/s" << std::endl;
    Sleep(4000);
}

void KineticEnergy()
{
    double Mass, velocity, Energy;
    std::cout << "Enter mass: ";
    std::cin >> Mass;
    std::cout << "Enter Velocity: ";
    std::cin >> velocity;
    Energy = (Mass * velocity * velocity) / 2;
    std::cout << "Kinetic Energy = " << Energy << " Joules" << std::endl;
    Sleep(4000);
}

void MechanicalEnergy()
{
    double Mass, velocity, height, Energy;
    std::cout << "Enter mass: ";
    std::cin >> Mass;
    std::cout << "Enter velocity: ";
    std::cin >> velocity;
    std::cout << "Enter height: ";
    std::cin >> height;
    Energy = (Mass * (velocity * velocity)) / 2 + Mass * 10 * height;
    std::cout << "Mechanical Energy = " << Energy << " Joules" << std::endl;
    Sleep(4000);
}

void Electricity()
{
    double Watt, Voltage, Ampers;
    std::cout << "Enter Watts: ";
    std::cin >> Watt; 
    std::cout << "Enter Voltage: ";
    std::cin >> Voltage;
    Ampers = Watt / Voltage;
    std::cout << "Electricity = " << Ampers << " Ampers" << std::endl;
    Sleep(4000);
}

void ElectricVoltage()
{
    double Ampers, Resistance, Voltage;
    std::cout << "Enter Ampers: ";
    std::cin >> Ampers;
    std::cout << "Enter resistance: ";
    std::cin >> Resistance;
    Voltage = Ampers * Resistance;
    std::cout << "Voltage = " << Voltage << " Volts" << std::endl;
    Sleep(4000);
}

void Pressure()
{
    double Force, Surface, Pressure;
    std::cout << "Enter force: ";
    std::cin >> Force;
    std::cout << "Enter surface: ";
    std::cin >> Surface;
    Pressure = Force / Surface;
    std::cout << "Pressure = " << Pressure << " Pascals" << std::endl;
    Sleep(4000);
}

void Distance()
{
    double Velocity, time, Displacement;
    std::cout << "Enter velocity: ";
    std::cin >> Velocity;
    std::cout << "Enter time: ";
    std::cin >> time;
    Displacement = Velocity * time;
    std::cout << "Displacement = " << Displacement << " Meters" << std::endl;
    Sleep(4000);
}

void FrictionForce()
{
    double coefficient, Newtons, friction;
    std::cout << "Enter coefficient: ";
    std::cin >> coefficient;
    std::cout << "Enter Newtons: ";
    std::cin >> Newtons;
    friction = coefficient * Newtons;
    std::cout << "Friction = " << friction << std::endl;
    Sleep(4000);
}
//end of calculating functions;

//Dynamic Menu functions
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void CalcMenu()
{
    int SetColors1[] = { 7,7,7,7,7,7,7,7,7,7,7,7 }; // DEFAULT COLORS
    int counter1 = 3;
    char key1;

    for (int i = 0;;)
    {
        
        gotoxy(0, 1); //The coordinates for the options
        color(SetColors1[0]);
        std::cout << "1. Acceleration" << std::endl;

        gotoxy(0, 2);
        color(SetColors1[1]);
        std::cout << "2. Kinetic Energy" << std::endl;

        gotoxy(0, 3);
        color(SetColors1[2]);
        std::cout << "3. Mechanic Energy" << std::endl;

        gotoxy(0, 4);
        color(SetColors1[3]);
        std::cout << "4. Electricity" << std::endl;

        gotoxy(0, 5);
        color(SetColors1[4]);
        std::cout << "5. Voltage" << std::endl;

        gotoxy(0, 6);
        color(SetColors1[5]);
        std::cout << "6. Pressure" << std::endl;

        gotoxy(0, 7);
        color(SetColors1[6]);
        std::cout << "7. Distance" << std::endl;

        gotoxy(0, 8);
        color(SetColors1[7]);
        std::cout << "8. Friction" << std::endl;

        gotoxy(0, 9);
        color(SetColors1[8]);
        std::cout << "Return" << std::endl;

        key1 = _getch();//getting the arrow key input

        if (key1 == 72 && (counter1 >= 2 && counter1 <= 9))//72 is for the up arrow
        {
            counter1--;
        }
        if (key1 == 80 && (counter1 >= 1 && counter1 <= 8))//80 is for the down arrow
        {
            counter1++;
        }
        if (key1 == '\r')//carriage return
        {
            // if enter is clicked and highlight is on one of the options the program will run the code there
            if (counter1 == 1)
            {
                system("CLS");
                Acceleration();
                system("CLS");
            }
            if (counter1 == 2)
            {
                system("CLS");
                KineticEnergy();
                system("CLS");
            }
            if (counter1 == 3)
            {
                system("CLS");
                MechanicalEnergy();
                system("CLS");
            }
            if (counter1 == 4)
            {
                system("CLS");
                Electricity();
                system("CLS");
            }
            if (counter1 == 5)
            {
                system("CLS");
                ElectricVoltage();
                system("CLS");
            }
            if (counter1 == 6)
            {
                system("CLS");
                Pressure();
                system("CLS");
            }
            if (counter1 == 7)
            {
                system("CLS");
                Distance();
                system("CLS");
            }
            if (counter1 == 8)
            {
                system("CLS");
                FrictionForce();
                system("CLS");
            }
            
            if (counter1 == 9)
            {
                SetColors1[0] = 7;
                Exit();
                homeScreen();
                break;
            }
        }
        //once again 7 is used to Set the default colors if we are no longer on our corresponding option
        SetColors1[0] = 7;
        SetColors1[1] = 7;
        SetColors1[2] = 7;
        SetColors1[3] = 7;
        SetColors1[4] = 7;
        SetColors1[5] = 7;
        SetColors1[6] = 7;
        SetColors1[7] = 7;
        SetColors1[8] = 7;
        SetColors1[9] = 7;


        //if our counter equals to one of the corresponding numbers for the menu the color is changed to green which is 10
        if (counter1 == 1)
        {
            SetColors1[0] = 10;
        }
        if (counter1 == 2)
        {
            SetColors1[1] = 10;
        }
        if (counter1 == 3)
        {
            SetColors1[2] = 10;
        }
        if (counter1 == 4)
        {
            SetColors1[3] = 10;
        }
        if (counter1 == 5)
        {
            SetColors1[4] = 10;
        }
        if (counter1 == 6)
        {
            SetColors1[5] = 10;
        }
        if (counter1 == 7)
        {
            SetColors1[6] = 10;
        }
        if (counter1 == 8)
        {
            SetColors1[7] = 10;
        }
        if (counter1 == 9)
        {
            SetColors1[8] = 10;
        }
    }
}



void DynamicMenu()
{
    int SetColors[] = { 7,7,7,7,7 }; // DEFAULT COLORS
    int counter = 3;
    char key;

    for (int i = 0;;)
    {
        gotoxy(0, 12); //The coordinates for the options
        color(SetColors[0]);
        std::cout << "1. Calculator Menu" << std::endl;

        gotoxy(0, 13);
        color(SetColors[1]);
        std::cout << "2. Help" << std::endl;

        gotoxy(0, 14);
        color(SetColors[2]);
        std::cout << "3. Exit" << std::endl;


        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 3))//72 is for the up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 2))//80 is for the down arrow
        {
            counter++;
        }
        if (key == '\r')//carriage return
        {
            // if enter is clicked and highlight is on one of the options the program will run the code there
            
            if (counter == 1)
            {
                system("CLS");
                CalcMenu();
            }
            if (counter == 2)
            {
                std::cout << "Menu 2 is Open" << std::endl;
            }
            if (counter == 3)
            {
                Exit();
                break;
            }
        }
        //once again 7 is used to SetColors the default colors if we are no longer on our corresponding option
        SetColors[0] = 7;
        SetColors[1] = 7;
        SetColors[2] = 7;
        SetColors[3] = 7;
        SetColors[4] = 7;


        //if our counter equals to one of the corresponding numbers for the menu the color is changed to green which is 12
        if (counter == 1)
        {
            SetColors[0] = 10;
        }
        if (counter == 2)
        {
            SetColors[1] = 10;
        }
        if (counter == 3)
        {
            SetColors[2] = 10;
        }
    }
}

//end of dynamic menu functions

int main()
{
    homeScreen();
    DynamicMenu();
}