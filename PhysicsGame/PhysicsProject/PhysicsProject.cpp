#include <iostream>
#include <stdlib.h>
using namespace std;

//Text Functions(For shortening the int main code;

void CalcMenu()
{
    cout << "Physics calculators:" << endl;
    cout << "1.Acceleration calculator;" << endl;
    cout << "2.Kinetic Energy calculator;" << endl;
    cout << "3.Mechanic Energy calculator;" << endl;
    cout << "4.Electricity calculator;" << endl;
    cout << "5.Volatage calculator;" << endl;
    cout << endl;
}
void KineticText()
{
    cout << "This is Kinetic Energy calculator. Enter mass(m) and object velocity(v):" << endl;
}

//calculating functions;

double FindAcceleration(double Vfinal, double Vstart, double t)
{
    return (Vfinal - Vstart) / t;
}


double KineticEnergy(double m, double v)
{
    return 0.5 * m * v * v;
}

double MechanicalEnergy(double m, double v, double h)
{
    return (m * (v * v)) / 2 + m * 10 * h;// E takes the value
}

double Electricity(double Watt, double Voltage)
{
    return Watt / Voltage; //Ampers take the value
}

double Voltage(double i, double r)
{
    return i * r;//V takes the value
}

double Pressure(double F, double S)
{
    return F / S; //P takes the value
}

double Distance(double V, double t)
{
    return V * t;// S takes the value
}

double FrictionForce(double k, double N)
{
    return k * N; //f takes the value
}


int main()
{
    int choice;
    int initial;

    cout << "Hello. What are you interested in?" <<
        endl << "1.Physics Calculators" <<
        endl << "2.Facts randomizer" << endl << endl;

    cin >> initial;

    if (initial == 1)
    {
        CalcMenu();

        cin >> choice;
        switch (choice) {
        case 1:
        {
            double Vfinal, VStart, t;
            cout << "This is acceleration calculator. Enter V1, V0 and t:" << endl;
            cin >> Vfinal >> VStart >> t;

            cout << "a = " << FindAcceleration(Vfinal, VStart, t);
            break;
        }
        case 2:
        {
            KineticText();
            double m, v;
            cin >> m >> v;

            cout << "Ke = " << KineticEnergy(m, v) << " J" << endl;

            break;
        }
        case 3:
        {
            cout << "c";
            break;
        }
        case 4:
        {
            cout << "d";
            break;
        }
        case 5:
        {
            cout << "e";
            break;
        }
        default:
            cout << "Invalid input" << endl;
        }
    }
    else if (initial == 2)
    {
        cin >> choice;
        switch (choice) {
        case '1':
            cout << "F" << endl;
            break;
        case '2':
            cout << "G";
            break;
        case '3':
            cout << "W" << endl;
            break;
        case '4':
            cout << "X" << endl;
            break;
        case '5':
            cout << "Q" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
}
