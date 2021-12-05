#include <iostream>
#include <windows.h>
#include "Functions.h"

void PrintCalculator()
{
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t ___________________________________" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|  _______________________________  |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                               | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                               | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                               | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |                               | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______________________________| |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|___________________________________|" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|\\ _______ _______ _______ _______ /|" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       |       | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |  CLS  |   0   |  000  |   *   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______|_______| |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       |       | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   7   |   8   |   9   |   -   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______|_______| |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       |       | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   4   |   5   |   6   |   +   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______|_______| |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |       |       |       |       | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |   1   |   2   |   3   |   /   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t| |_______|_______|_______|_______| |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t|/_________________________________\\|" << std::endl;
}


//calculating functions
void Acceleration()
{
    PrintCalculator();
    double Velocity1, Velocity0, time, Acceleration;

    gotoxy(100, 12); //Coordinates of the outputs
    std::cout << "Enter Velocity 1: ";
    std::cin >> Velocity1;

    gotoxy(100, 13);
    std::cout << "Enter Velocity 0: ";
    std::cin >> Velocity0;

    gotoxy(100, 14);
    std::cout << "Enter Time: ";
    std::cin >> time;

    Acceleration = (Velocity1 - Velocity0) / time;

    gotoxy(100, 15);
    std::cout << "Acceleration = " << Acceleration << " m/s^2" << std::endl;
    Sleep(5000);
    system("CLS");
    CalcMenuMag();
}

void KineticEnergy()
{
    PrintCalculator();
    double Mass, velocity, Energy;

    gotoxy(100, 12);//Coordinates of the outputs
    std::cout << "Enter Mass: ";
    std::cin >> Mass;

    gotoxy(100, 13);
    std::cout << "Enter Velocity: ";
    std::cin >> velocity;

    Energy = (Mass * velocity * velocity) / 2;

    gotoxy(100, 14);
    std::cout << "Kinetic Energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void MechanicalEnergy()
{
    PrintCalculator();
    double Mass, velocity, height, Energy;

    gotoxy(100, 12);//Coordinates of the outputs
    std::cout << "Enter Mass: ";
    std::cin >> Mass;

    gotoxy(100, 13);
    std::cout << "Enter Velocity: ";
    std::cin >> velocity;

    gotoxy(100, 14);
    std::cout << "Enter Height: ";
    std::cin >> height;

    Energy = (Mass * (velocity * velocity)) / 2 + Mass * 10 * height;

    gotoxy(100, 15);
    std::cout << "Mechanical Energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void Electricity()
{
    PrintCalculator();
    double Watt, Voltage, Ampers;

    gotoxy(100, 12);//Coordinates of the outputs
    std::cout << "Enter Watts: ";
    std::cin >> Watt;

    gotoxy(100, 13);
    std::cout << "Enter Voltage: ";
    std::cin >> Voltage;


    Ampers = Watt / Voltage;

    gotoxy(100, 14);
    std::cout << "Electricity = " << Ampers << " A" << std::endl;
    Sleep(5000);
}

void ElectricVoltage()
{
    PrintCalculator();
    double Ampers, Resistance, Voltage;

    gotoxy(100, 12);//Coordinates of the outputs
    std::cout << "Enter Ampers: ";
    std::cin >> Ampers;

    gotoxy(100, 13);
    std::cout << "Enter resistance: ";
    std::cin >> Resistance;

    Voltage = Ampers * Resistance;

    gotoxy(100, 14);
    std::cout << "Voltage = " << Voltage << " V" << std::endl;
    Sleep(5000);
}

void Pressure()
{
    PrintCalculator();
    double Force, Surface, Pressure;

    gotoxy(100, 12);//Coordinates of the outputs
    std::cout << "Enter force: ";
    std::cin >> Force;

    gotoxy(100, 13);
    std::cout << "Enter surface: ";
    std::cin >> Surface;

    Pressure = Force / Surface;
    gotoxy(100, 14);
    std::cout << "Pressure = " << Pressure << " Pa" << std::endl;
    Sleep(5000);
}

void Distance()
{
    PrintCalculator();
    double Velocity, time, Displacement;

    gotoxy(100, 12);
    std::cout << "Enter Velocity: ";
    std::cin >> Velocity;

    gotoxy(100, 13);
    std::cout << "Enter Time: ";
    std::cin >> time;

    Displacement = Velocity * time;
    gotoxy(100, 14);
    std::cout << "Displacement = " << Displacement << " m" << std::endl;
    Sleep(5000);
}

void FrictionForce()
{
    PrintCalculator();
    double coefficient, Newtons, friction;

    gotoxy(100, 12);
    std::cout << "Enter Coefficient: ";
    std::cin >> coefficient;

    gotoxy(100, 13);
    std::cout << "Enter Newtons: ";
    std::cin >> Newtons;

    friction = coefficient * Newtons;

    gotoxy(100, 14);
    std::cout << "Friction = " << friction << std::endl;
    Sleep(5000);
}

void ArchimedPrinciple()
{
    PrintCalculator();
    double Rho, Volume, EarthAcceleration = 10, ArchimedPrinciple;
    gotoxy(100, 12);
    std::cout << "Enter Density: ";
    std::cin >> Rho;

    gotoxy(100, 13);
    std::cout << "Enter Volume: ";
    std::cin >> Volume;

    ArchimedPrinciple = Rho * Volume * EarthAcceleration;
    gotoxy(100, 14);
    std::cout << "Buoyant Force = " << ArchimedPrinciple << " N" << std::endl;
    Sleep(5000);
}

void FreeFall()
{
    PrintCalculator();
    double time, EarthAcceleration = 10, Distance, Velocity;

    gotoxy(100, 12);
    std::cout << "Enter time: ";
    std::cin >> time;

    Velocity = time * EarthAcceleration;
    Distance = (EarthAcceleration * (time * time)) / 2;

    gotoxy(100, 13);
    std::cout << "Free Fall Velocity = " << Velocity << " m/s" << std::endl;
    std::cout << "Free Fall Distance = " << Distance << " m" << std::endl;
    Sleep(5000);
}

void Mechanicalwork()
{
    PrintCalculator();
    double MechanicalWork, Friction, Distance;

    gotoxy(100, 12);
    std::cout << "Enter Friction: ";
    std::cin >> Friction;

    gotoxy(100, 13);
    std::cout << "Enter Distance: ";
    std::cin >> Distance;

    MechanicalWork = Friction * Distance;
    gotoxy(100, 14);
    std::cout << "Mechanical Work = " << MechanicalWork << " J" << std::endl;
    Sleep(5000);
}

void MechanicalPower()
{
    PrintCalculator();
    double Work, time, Power;

    gotoxy(100, 12);
    std::cout << "Enter Work: ";
    std::cin >> Work;

    gotoxy(100, 13);
    std::cout << "Enter Time: ";
    std::cin >> time;

    Power = Work / time;
    gotoxy(100, 14);
    std::cout << "Mechanical power = " << Power << " W" << std::endl;
    Sleep(5000);
}

void PotentialEnergy()
{
    PrintCalculator();
    double Mass, EarthAcceleration = 10, height, Energy;

    gotoxy(100, 12);
    std::cout << "Enter Mass: ";
    std::cin >> Mass;

    gotoxy(100, 13);
    std::cout << "Enter Height: ";
    std::cin >> height;

    Energy = Mass * EarthAcceleration * height;
    gotoxy(100, 14);
    std::cout << "Potential energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void HydrostaticPressure()
{
    PrintCalculator();
    double Rho, EarthAcceleration = 10, height, HydroRho;

    gotoxy(100, 12);
    std::cout << "Enter Density: ";
    std::cin >> Rho;

    gotoxy(100, 13);
    std::cout << "Enter height: ";
    std::cin >> height;

    HydroRho = Rho * EarthAcceleration * height;
    gotoxy(100, 14);
    std::cout << "Hydrostatic pressure = " << HydroRho << " kg/m^3" << std::endl;
    Sleep(5000);
}

void Density()
{
    PrintCalculator();
    double Mass, Volume, Density;

    gotoxy(100, 12);
    std::cout << "Enter Mass: ";
    std::cin >> Mass;

    gotoxy(100, 13);
    std::cout << "Enter Volume: ";
    std::cin >> Volume;

    Density = Mass / Volume;
    gotoxy(100, 14);
    std::cout << "Density = " << Density << " kg/m^3" << std::endl;
    Sleep(5000);
}

void LenzLaw()
{
    PrintCalculator();
    double Ampers, Resistance, time, LenzLaw;

    gotoxy(100, 12);
    std::cout << "Enter Ampers: ";
    std::cin >> Ampers;

    gotoxy(100, 13);
    std::cout << "Enter Resitance: ";
    std::cin >> Resistance;

    gotoxy(100, 14);
    std::cout << "Enter Time: ";
    std::cin >> time;

    LenzLaw = (Ampers * Ampers) * Resistance * time;
    gotoxy(100, 15);
    std::cout << "Density = " << LenzLaw << " J" << std::endl;
    Sleep(5000);
}

void Kmph_To_Mps()
{
    PrintCalculator();
    double mps, kmph;

    gotoxy(100, 12);
    std::cout << "Enter Kilometers Per Hour: ";
    std::cin >> kmph;

    mps = kmph * 0.277778;

    gotoxy(100, 15);
    std::cout << "The speed in meters per second is: " << mps << " m/s" <<  std::endl;
    Sleep(5000);

    system("CLS");
    CalcMenu();
}

void Newtons_To_Kilonewtons()
{
    PrintCalculator();
    double newtons, kilonewtons;

    gotoxy(100, 12);
    std::cout << "Enter Newtons: ";
    std::cin >> newtons;

    kilonewtons = newtons / 1000;
       
    gotoxy(100, 15);
    std::cout << "Kilonewtons = " << kilonewtons << "kN";
    Sleep(5000);

    system("CLS");
    CalcMenu();
}

void Pascal_To_Kilopascal()
{
    PrintCalculator();
    double pascals, kilopascal;

    gotoxy(100, 12);
    std::cout << "Enter Newtons: ";
    std::cin >> pascals;

    kilopascal = pascals / 1000;

    gotoxy(100, 15);
    std::cout << "Kilopascals = " << kilopascal << "kPa";
    Sleep(5000);

    system("CLS");
    CalcMenu();
}

void Joules_To_Kilojoules()
{
    PrintCalculator();
    double joules, kilojoules;

    gotoxy(100, 12);
    std::cout << "Enter Joules: ";
    std::cin >> joules;

    kilojoules = joules / 1000;

    gotoxy(100, 15);
    std::cout << "Kilojoules = " << kilojoules << "kJ";
    Sleep(5000);

    system("CLS");
    CalcMenu();
}

void Watts_To_Kilowatts()
{
    PrintCalculator();
    double watts, kilowatts;

    gotoxy(100, 12);
    std::cout << "Enter Watts: ";
    std::cin >> watts;

    kilowatts = watts / 1000;

    gotoxy(100, 15);
    std::cout << "Kilowatts = " << kilowatts << "kW";
    Sleep(5000);

    system("CLS");
    CalcMenu();
}