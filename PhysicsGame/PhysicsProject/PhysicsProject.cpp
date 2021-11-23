#include <iostream>
#include <conio.h>
#include <windows.h>


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



//Dynamic Menu functins
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void DynamicMenu()
{
    int SetColors[] = { 7,7,7,7,7 }; // DEFAULT COLORS
    int counter = 3;
    char key;

    for (int i = 0;;)
    {


        gotoxy(0, 1); //The coordinates for the options
        color(SetColors[0]);
        std::cout << "1. Menu" << std::endl;

        gotoxy(0, 2);
        color(SetColors[1]);
        std::cout << "2. Help" << std::endl;

        gotoxy(0, 3);
        color(SetColors[2]);
        std::cout << "3. Exit" << std::endl;

        gotoxy(0, 4);
        color(SetColors[3]);
        std::cout << "4. Extra_1" << std::endl;

        gotoxy(0, 5);
        color(SetColors[4]);
        std::cout << "5. Extra_2" << std::endl;

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 5))//72 is for the up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 4))//80 is for the down arrow
        {
            counter++;
        }
        if (key == '\r')//carriage return
        {
            // if enter is clicked and highlight is on one of the options the program will run the code there
            if (counter == 1)
            {
                std::cout << "Menu 1 is Open" << std::endl;
            }
            if (counter == 2)
            {
                std::cout << "Menu 2 is Open" << std::endl;
            }
            if (counter == 3)
            {
                std::cout << "Menu 3 is Open" << std::endl;
            }
            if (counter == 4)
            {
                std::cout << "Menu 4 is Open" << std::endl;
            }
            if (counter == 5)
            {
                std::cout << "Menu 5 is Open" << std::endl;
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
        if (counter == 4)
        {
            SetColors[3] = 10;
        }
        if (counter == 5)
        {
            SetColors[4] = 10;
        }
    }
}

void Exit()
{
    system("CLS");
}

void CalcMenu()
{
    int SetColors1[] = { 7,7,7,7,7,7,7,7,7,7,7,7 }; // DEFAULT COLORS
    int counter1 = 3;
    char key1;

    std::cout << "Calculator Options" << std::endl;

    for (int i = 0;;)
    {
        gotoxy(0, 1); //The coordinates for the options
        color(SetColors1[0]);
        std::cout << "1.Acceleration calculator;" << std::endl;

        gotoxy(0, 2);
        color(SetColors1[1]);
        std::cout << "2.Kinetic Energy calculator;" << std::endl;

        gotoxy(0, 3);
        color(SetColors1[2]);
        std::cout << "3.Mechanic Energy calculator;" << std::endl;

        gotoxy(0, 4);
        color(SetColors1[3]);
        std::cout << "4.Electricity calculator;" << std::endl;

        gotoxy(0, 5);
        color(SetColors1[4]);
        std::cout << "5.Voltage calculator;" << std::endl;

        gotoxy(0, 6);
        color(SetColors1[5]);
        std::cout << "6.Something else" << std::endl;

        gotoxy(0, 7);
        color(SetColors1[6]);
        std::cout << "7.Something else" << std::endl;

        gotoxy(0, 8);
        color(SetColors1[7]);
        std::cout << "Exit" << std::endl;

        key1 = _getch();

        if (key1 == 72 && (counter1 >= 2 && counter1 <= 8))
        {
            counter1--;
        }
        if (key1 == 80 && (counter1 >= 1 && counter1 <= 7))
        {
            counter1++;
        }
        if (key1 == '\r')//carriage return
        {
            // if enter is clicked and highlight is on one of the options the program will run the code there
            if (counter1 == 1)
            {
                std::cout << "Menu 1 is Open" << std::endl;
            }
            if (counter1 == 2)
            {
                std::cout << "Menu 2 is Open" << std::endl;
            }
            if (counter1 == 3)
            {
                std::cout << "Menu 3 is Open" << std::endl;
            }
            if (counter1 == 4)
            {
                std::cout << "Menu 4 is Open" << std::endl;
            }
            if (counter1 == 5)
            {
                std::cout << "Menu 5 is Open" << std::endl;
            }
            if (counter1 == 6)
            {
                std::cout << "Menu 6 is Open" << std::endl;
            }
            if (counter1 == 7)
            {
                std::cout << "Menu 7 is Open" << std::endl;
            }
            if (counter1 == 8)
            {
                Exit();
                break;
            }
        }
        //once again 7 is used to SetColors the default colors if we are no longer on our corresponding option
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
    }
}
//end of dynamic menu functions