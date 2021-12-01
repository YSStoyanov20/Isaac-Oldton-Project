#include <iostream>
#include <Windows.h>

void Acceleration()
{
    double Velocity1, Velocity0, time, Acceleration;
    std::cout << "Enter Velocity 1: ";
    std::cin >> Velocity1;
    std::cout << "Enter Velocity 0: ";
    std::cin >> Velocity0;
    std::cout << "Enter Time: ";
    std::cin >> time;
    Acceleration = (Velocity1 - Velocity0) / time;
    std::cout << "Acceleration = " << Acceleration << " m/s" << std::endl;
    Sleep(5000);
}

void KineticEnergy()
{
    double Mass, velocity, Energy;
    std::cout << "Enter Mass: ";
    std::cin >> Mass;
    std::cout << "Enter Velocity: ";
    std::cin >> velocity;
    Energy = (Mass * velocity * velocity) / 2;
    std::cout << "Kinetic Energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void MechanicalEnergy()
{
    double Mass, velocity, height, Energy;
    std::cout << "Enter Mass: ";
    std::cin >> Mass;
    std::cout << "Enter Velocity: ";
    std::cin >> velocity;
    std::cout << "Enter Height: ";
    std::cin >> height;
    Energy = (Mass * (velocity * velocity)) / 2 + Mass * 10 * height;
    std::cout << "Mechanical Energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void Electricity()
{
    double Watt, Voltage, Ampers;
    std::cout << "Enter Watts: ";
    std::cin >> Watt; 
    std::cout << "Enter Voltage: ";
    std::cin >> Voltage;
    Ampers = Watt / Voltage;
    std::cout << "Electricity = " << Ampers << " A" << std::endl;
    Sleep(5000);
}

void ElectricVoltage()
{
    double Ampers, Resistance, Voltage;
    std::cout << "Enter Ampers: ";
    std::cin >> Ampers;
    std::cout << "Enter resistance: ";
    std::cin >> Resistance;
    Voltage = Ampers * Resistance;
    std::cout << "Voltage = " << Voltage << " V" << std::endl;
    Sleep(5000);
}

void Pressure()
{
    double Force, Surface, Pressure;
    std::cout << "Enter force: ";
    std::cin >> Force;
    std::cout << "Enter surface: ";
    std::cin >> Surface;
    Pressure = Force / Surface;
    std::cout << "Pressure = " << Pressure << " Pa" << std::endl;
    Sleep(5000);
}

void Distance()
{
    double Velocity, time, Displacement;
    std::cout << "Enter Velocity: ";
    std::cin >> Velocity;
    std::cout << "Enter Time: ";
    std::cin >> time;
    Displacement = Velocity * time;
    std::cout << "Displacement = " << Displacement << " m" << std::endl;
    Sleep(5000);
}

void FrictionForce()
{
    double coefficient, Newtons, friction;
    std::cout << "Enter Coefficient: ";
    std::cin >> coefficient;
    std::cout << "Enter Newtons: ";
    std::cin >> Newtons;
    friction = coefficient * Newtons;
    std::cout << "Friction = " << friction << std::endl;
    Sleep(5000);
}

void ArchimedPrinciple()
{
    double Rho, Volume, EarthAcceleration = 10, ArchimedPrinciple;
    std::cout << "Enter Density: ";
    std::cin >> Rho;
    std::cout << "Enter Volume: ";
    std::cin >> Volume;
    ArchimedPrinciple = Rho * Volume * EarthAcceleration;
    std::cout << "Buoyant Force = " << ArchimedPrinciple << " N" << std::endl;
    Sleep(5000);
}

void FreeFall()
{
    double time, EarthAcceleration = 10, Distance, Velocity;
    std::cout << "Enter time: ";
    std::cin >> time;
    Velocity = time * EarthAcceleration;
    Distance = (EarthAcceleration * (time * time)) / 2;
    std::cout << "Free Fall Velocity = " << Velocity << " m/s" << std::endl;
    std::cout << "Free Fall Distance = " << Distance << " m" << std::endl;
    Sleep(5000);
}

void Mechanicalwork()
{
    double MechanicalWork, Friction, Distance;
    std::cout << "Enter Friction: ";
    std::cin >> Friction;
    std::cout << "Enter Distance: ";
    std::cin >> Distance;
    MechanicalWork = Friction * Distance;
    std::cout << "Mechanical Work = " << MechanicalWork << " J" << std::endl;
    Sleep(5000);
}

void MechanicalPower()
{
    double Work, time, Power;
    std::cout << "Enter Work: ";
    std::cin >> Work;
    std::cout << "Enter Time: ";
    std::cin >> time;
    Power = Work / time;
    std::cout << "Mechanical power = " << Power << " W" << std::endl;
    Sleep(5000);
}

void PotentialEnergy()
{
    double Mass, EarthAcceleration = 10, height, Energy;
    std::cout << "Enter Mass: ";
    std::cin >> Mass;
    std::cout << "Enter Height: ";
    std::cin >> height;
    Energy = Mass * EarthAcceleration * height;
    std::cout << "Potential energy = " << Energy << " J" << std::endl;
    Sleep(5000);
}

void HydrostaticPressure()
{
    double Rho, EarthAcceleration = 10, height, HydroRho;
    std::cout << "Enter Density: ";
    std::cin >> Rho;
    std::cout << "Enter height: ";
    std::cin >> height;
    HydroRho = Rho * EarthAcceleration * height;
    std::cout << "Hydrostatic pressure = " << HydroRho << " kg/m^3" << std::endl;
    Sleep(5000);
}

void Density()
{
    double Mass, Volume, Density;
    std::cout << "Enter Mass: ";
    std::cin >> Mass;
    std::cout << "Enter Volume: ";
    std::cin >> Volume;
    Density = Mass / Volume;
    std::cout << "Density = " << Density << " kg/m^3" << std::endl;
    Sleep(5000);
}

void LenzLaw()
{
    double Ampers, Resistance, time, LenzLaw;
    std::cout << "Enter Ampers: ";
    std::cin >> Ampers;
    std::cout << "Enter Resitance: ";
    std::cin >> Resistance;
    std::cout << "Enter Time: ";
    std::cin >> time;
    LenzLaw = (Ampers * Ampers) * Resistance * time;
    std::cout << "Density = " << LenzLaw << " J" << std::endl;
    Sleep(5000);
}