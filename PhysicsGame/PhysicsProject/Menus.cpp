#include <iostream>
#include <conio.h>
#include <Windows.h>

// Functions that are used in the calculator menu

void Acceleration();
void KineticEnergy();
void MechanicalEnergy();
void Electricity();
void ElectricVoltage();
void Pressure();
void Distance();
void FrictionForce();
void ArchimedPrinciple();
void FreeFall();
void Mechanicalwork();
void MechanicalPower();
void PotentialEnergy();
void HydrostaticPressure();
void Density();
void LenzLaw();
void game();
void guide();
void Kmph_To_Mps();
void Newtons_To_Kilonewtons();
void Pascal_To_Kilopascal();
void Joules_To_Kilojoules();
void Watts_To_Kilowatts();

void color(int color)//Adds Colors to the text
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)//Based on Coordinates x/y
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



// ASCII Art and Graphic elements
void homeScreen()
{
    SetConsoleTextAttribute((HANDLE)GetStdHandle(STD_OUTPUT_HANDLE), 9);
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t  _____                         ____  _     _ _              " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t |_   _|                       / __ \\| |   | | |             " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t   | |  ___  __ _  __ _  ___  | |  | | | __| | |_ ___  _ __  " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t   | | / __|/ _` |/ _` |/ __| | |  | | |/ _` | __/ _ \\| '_ \\ " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t  _| |_\\__ \\ (_| | (_| | (__  | |__| | | (_| | || (_) | | | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t |_____|___/\\__,_|\\__,_|\\___|  \\____/|_|\\__,_|\\__\\___/|_| |_|" << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t                  Press Enter to continue ... " << std::endl;  
}

void CalcMenuMag() 
{
    system("CLS");
    std::cout << "          ..                               .:::.   " << std::endl;
    std::cout << "    :+%@@@@%*-.                       .+:-:::::.  " << std::endl;
    std::cout << "-*%@@@@@@@@@@@@#+-.                 .#*:@%-.:::  " << std::endl;
    std::cout << "     .:=*%@@@@@@@@@@@*-             :--=--*::--=- " << std::endl;
    std::cout << "          -%@@@@@@@@@@@@*.           ---:-=-=::   " << std::endl;
    std::cout << "            -%@@@@@@@@@@@@%=         ::.          " << std::endl;
    std::cout << "              *@@@@@@@#+**+*#.     .+*+           " << std::endl;
    std::cout << "              +@@@@@+:-::=--#    .#%##*-          " << std::endl;
    std::cout << "               :@@@%+:..:-:--*-   *#%#%%%#:       " << std::endl;
    std::cout << "                ***+:..-:.=::-*=.+%#######%=     " << std::endl;
    std::cout << "               ::-:--:-=-====:=*=%%#%%####%%=    " << std::endl;
    std::cout << "              -:::::=::+==:::::=-:==+###*+==+=    " << std::endl;
    std::cout << "            .::::::=##::-:..=--:+-:::+--          " << std::endl;
    std::cout << "          .::::::::*:+%*++::++=*++::-=. .         " << std::endl;
    std::cout << "         .::::::::*+::=+--===::----:=-.            " << std::endl;
    std::cout << "         :.-::::++%#:::==-+*+=--=:=:=-            ____ _                                     ____      _            _       _                 " << std::endl;
    std::cout << "           :---#%##%-:-:=:-=-::=:::=--           / ___| |__   ___   ___  ___  ___    __ _   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __    _ " << std::endl;
    std::cout << "          .##%+%#%%%#::-=::::::==::+            | |   | '_ \\ / _ \\ / _ \\/ __|/ _ \\  / _` | | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|  (_)" << std::endl;
    std::cout << "        -*%#%%####%#%.:*::.:::::+:-             | |___| | | | (_) | (_) \\__ \\  __/ | (_| | | |__| (_| | | (__| |_| | | (_| | || (_) | |      _ " << std::endl;
    std::cout << "     -::%=+:+++==+##%=.+:.::::::=-=              \\____|_| |_|\\___/ \\___/|___/\___|   \\__,_|  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|     (_)" << std::endl;
    std::cout << "      .**-=--::#%#####--::::::::-#:              " << std::endl;
    std::cout << "      *%%%#*#%@@@%%%###::::::::=#%:              " << std::endl;
    std::cout << "     :%%%#%##%*#%@@@@%##-::::::#%=               " << std::endl;
    std::cout << "      %%#%##%=*####%%@@@%=::::+@%:               " << std::endl;
    std::cout << "      %%#%%%+ %##%%%###%%%*::-%%#%.              " << std::endl;
    std::cout << "     *%%%#- .%#####%%###%%=:#%##%=               " << std::endl;
    std::cout << "       ::.   -%###%#######%#-%###%#              " << std::endl;
    std::cout << "             *%############%%#####%=              " << std::endl;
    std::cout << "            .%%#%##%#######%#######%-             " << std::endl;
    std::cout << "            *###%###################*             " << std::endl << std::endl;
}



// Loading Screen
void load()
{
    color(8);
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t          BOOTING UP" << std::endl << std::endl << "\t\t\t";

    std::cout << "\t\t\t\t\t\t\t\t    ";
    for (int r = 1; r <= 19; r++)
    {
        Sleep(200);
        color(9);
        std::cout << (char)219u << " ";
    }
}

void boothUpScreen()
{
    color(9);
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t                 &&&&&&&&&&&&&&&&&&&&&";
    color(14);
    std::cout << "**********************             " << std::endl; 
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                &&&&&&&&&&&&&&&&&&&&&&"; 
    color(14);
    std:: cout << "***********************            " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t               &&&&                   ";
    color(14);
    std::cout << "                    ****           " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t              &&&&    &&&&&&&&&&&&&&&&";
    color(14);
    std::cout << "*****************    ****          " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t              &&&    &&&&&&&&&&&&&&&&&";
    color(14);
    std::cout << "******************    ***          " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t             &&&    &&&&&&&&";
    color(14);
    std::cout << "******";
    color(9);
    std::cout << "&&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&&&&&&";
    color(14);
    std::cout << "********    *** " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t            &&&&   &&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "/";
    color(14);
    std::cout << "*%";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "********   ****        " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t           &&&&   &&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "********";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "********   ****       " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t          &&&&    &&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&&&&&";
    color(14);
    std::cout << "**********";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "*********    ****      " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t         &&&&    &&&&&&&&&";
    color(14);
    std::cout << "*******";
    color(9);
    std::cout << "&&& ";
    color(14);
    std::cout << "    ***";
    color(9);
    std::cout << "&&&&&&&";
    color(14);
    std::cout << "**********   ***      " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t        &&&&    &&&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&& ";
    color(14);
    std::cout << "  ***";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "*";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&";
    color(14);
    std::cout << "*****    ***     " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t        &&&    &&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&&&&&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&&&& ";
    color(14);
    std::cout << "  ****";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*********";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "****   ****    " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t       &&&&   &&&&&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&&&&&&&";
    color(14);
    std::cout << "****";
    color(9);
    std::cout << "&&&& ";
    color(14);
    std::cout << "  ****";
    color(9);
    std::cout << "&&&&";
    color(14);
    std::cout << "*******";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*****   ****   " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t      &&&&   &&&&&&&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&& ";
    color(14);
    std::cout << "  **";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*";
    color(9);
    std::cout << "&&&&&";
    color(14);
    std::cout << "********    ****  " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t     &&&&    &&&&&&&&&&&&&&&";
    color(14);
    std::cout << "******";
    color(9);
    std::cout << "&&  ";
    color(14);
    std::cout << "   **";
    color(9);
    std::cout << "&&&&&&";
    color(14);
    std::cout << "***************    **** " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t     &&&    &&&&&&&&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&&";
    color(14);
    std::cout << "***";
    color(14);
    std::cout << "*";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "******";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "***************    *** " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t    &&&&       &&&&&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&&&&";
    color(14);
    std::cout << "*";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "********";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "************       ****" << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t      &&&&&&      &&&&&&&&&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&&&";
    color(14);
    std::cout << "***";
    color(9);
    std::cout << "&";
    color(14);
    std::cout << "**";
    color(9);
    std::cout << "&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&&";
    color(14);
    std::cout << "*********      ******  " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t         &&&&&&      &&&&&&&";
    color(14);
    std::cout << "******";
    color(9);
    std::cout << "&&&&";
    color(14);
    std::cout << "*****";
    color(9);
    std::cout << "&&&&&&";
    color(14);
    std::cout << "******       ******     " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t             &&&&&&      &&&&&&&&&&&&&";
    color(14);
    std::cout << "**************      ******         " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                &&&&&&      &&&&&&&&&&";
    color(14);
    std::cout << "**********      ******            " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                   *&&&&&(      &&&&&&";
    color(14);
    std::cout << "*******       *****                " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                       &&&&&&      &&&";
    color(14);
    std::cout << "****      ******                   " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                          &&&&&&      ";
    color(14);
    std::cout << "       ******                      " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                              &&&&&&  ";
    color(14);
    std::cout << "   ******                          " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                                 &&&&&";
    color(14);
    std::cout << "******                             " << std::endl;
    Sleep(100);
    color(9);
    std::cout << "\t\t\t\t\t\t\t\t\t                                     &";
    color(14);
    std::cout << "**                                 " << std::endl << std::endl;

    load();
}

void LoadingScreen()
{
    boothUpScreen();
    SetConsoleTextAttribute((HANDLE)GetStdHandle(STD_OUTPUT_HANDLE), 8);
    std::cout << std::endl << std::endl << "\t\t\t\t\t\t\t\t\t\t\t            PRESS ENTER TO CONTINUE" << std::endl << std::endl << "\t\t\t";
    system("pause>null");
    system("cls");
}

// Calculator Menu
void CalcMenu()
{
    int SetColors1[] = { 7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7 }; // DEFAULT COLORS
    int counter1 = 3;
    char key1;
    

    for (int i = 0;;)
    {
       
        CalcMenuMag();

        gotoxy(0, 32); //The coordinates for the options
        color(SetColors1[0]);
        std::cout << " 1. Acceleration" << std::endl;

        gotoxy(0, 33);
        color(SetColors1[1]);
        std::cout << " 2. Kinetic Energy" << std::endl;

        gotoxy(0, 34);
        color(SetColors1[2]);
        std::cout << " 3. Mechanic Energy" << std::endl;

        gotoxy(0, 35);
        color(SetColors1[3]);
        std::cout << " 4. Electricity" << std::endl;

        gotoxy(0, 36);
        color(SetColors1[4]);
        std::cout << " 5. Voltage" << std::endl;

        gotoxy(0, 37);
        color(SetColors1[5]);
        std::cout << " 6. Pressure" << std::endl;

        gotoxy(0, 38);
        color(SetColors1[6]);
        std::cout << " 7. Distance" << std::endl;

        gotoxy(0, 39);
        color(SetColors1[7]);
        std::cout << " 8. Friction" << std::endl;

        gotoxy(0, 40);
        color(SetColors1[8]);
        std::cout << " 9. Principle of Archimed" << std::endl;

        gotoxy(0, 41);
        color(SetColors1[9]);
        std::cout << " 10. Free Fall" << std::endl;

        gotoxy(0, 42);
        color(SetColors1[10]);
        std::cout << " 11. Mechanical Work" << std::endl;

        gotoxy(0, 43);
        color(SetColors1[11]);
        std::cout << " 12. Mechanical Power" << std::endl;

        gotoxy(0, 44);
        color(SetColors1[12]);
        std::cout << " 13. Mechanical Energy" << std::endl;

        gotoxy(0, 45);
        color(SetColors1[13]);
        std::cout << " 14. Hydrostatic Pressure" << std::endl;

        gotoxy(0, 46);
        color(SetColors1[14]);
        std::cout << " 15. Density" << std::endl;

        gotoxy(0, 47);
        color(SetColors1[15]);
        std::cout << " 16. Lenz's Law" << std::endl;

        gotoxy(0, 48);
        color(SetColors1[16]);
        std::cout << " 17. Kmp/h To m/s" << std::endl;

        gotoxy(0, 49);
        color(SetColors1[17]);
        std::cout << " 18. Newtons To Kilonewtons" << std::endl;

        gotoxy(0, 50);
        color(SetColors1[18]);
        std::cout << " 19. Pascal To Kilopascal" << std::endl;

        gotoxy(0, 51);
        color(SetColors1[19]);
        std::cout << " 20. Joules To Kilojoules" << std::endl;

        gotoxy(0, 52);
        color(SetColors1[20]);
        std::cout << " 21. Watts To Kilowatts" << std::endl;

        gotoxy(0, 53);
        color(SetColors1[21]);
        std::cout << " Return" << std::endl;
        color(7);

        key1 = _getch();// Getting the arrow key input

        if (key1 == 72 && (counter1 >= 2 && counter1 <= 22))// 72 is for the up arrow
        {
            counter1--;
        }
        if (key1 == 80 && (counter1 >= 1 && counter1 <= 21))//80 is for the down arrow
        {
            counter1++;
        }
        if (key1 == '\r')// carriage return aka reset the position of the device to the beginning of a line of text
        {
            // If enter is clicked and highlight is on one of the options the program will run the code there
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
                system("CLS");
                ArchimedPrinciple();
                system("CLS");
            }
            if (counter1 == 10)
            {
                system("CLS");
                FreeFall();
                system("CLS");
            }
            if (counter1 == 11)
            {
                system("CLS");
                Mechanicalwork();
                system("CLS");
            }
            if (counter1 == 12)
            {
                system("CLS");
                MechanicalPower();
                system("CLS");
            }
            if (counter1 == 13)
            {
                system("CLS");
                PotentialEnergy();
                system("CLS");
            }
            if (counter1 == 14)
            {
                system("CLS");
                HydrostaticPressure();
                system("CLS");
            }
            if (counter1 == 15)
            {
                system("CLS");
                Density();
                system("CLS");
            }
            if (counter1 == 16)
            {
                system("CLS");
                LenzLaw();
                system("CLS");
            }
            if (counter1 == 17)
            {
                system("CLS");
                Kmph_To_Mps();
                system("CLS");
            }
            if (counter1 == 18)
            {
                system("CLS");
                Newtons_To_Kilonewtons();
                system("CLS");
            }
            if (counter1 == 19)
            {
                system("CLS");
                Pascal_To_Kilopascal();
                system("CLS");
            }
            if (counter1 == 20)
            {
                system("CLS");
                Joules_To_Kilojoules();
                system("CLS");
            }
            if (counter1 == 21)
            {
                system("CLS");
                Watts_To_Kilowatts();
                system("CLS");
            }
            if (counter1 == 22)
            {
                SetColors1[0] = 7;
                system("CLS");
                color(7);
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
        SetColors1[10] = 7;
        SetColors1[11] = 7;
        SetColors1[12] = 7;
        SetColors1[13] = 7;
        SetColors1[14] = 7;
        SetColors1[15] = 7;
        SetColors1[16] = 7;
        SetColors1[17] = 7;
        SetColors1[18] = 7;
        SetColors1[19] = 7;
        SetColors1[20] = 7;
        SetColors1[21] = 7;
        SetColors1[22] = 7;


        // If our counter equals to one of the corresponding numbers for the menu the color is changed to blue which is 9
        if (counter1 == 1)
        {
            SetColors1[0] = 9;
        }
        if (counter1 == 2)
        {
            SetColors1[1] = 9;
        }
        if (counter1 == 3)
        {
            SetColors1[2] = 9;
        }
        if (counter1 == 4)
        {
            SetColors1[3] = 9;
        }
        if (counter1 == 5)
        {
            SetColors1[4] = 9;
        }
        if (counter1 == 6)
        {
            SetColors1[5] = 9;
        }
        if (counter1 == 7)
        {
            SetColors1[6] = 9;
        }
        if (counter1 == 8)
        {
            SetColors1[7] = 9;
        }
        if (counter1 == 9)
        {
            SetColors1[8] = 9;
        }
        if (counter1 == 10)
        {
            SetColors1[9] = 9;
        }
        if (counter1 == 11)
        {
            SetColors1[10] = 9;
        }
        if (counter1 == 12)
        {
            SetColors1[11] = 9;
        }
        if (counter1 == 13)
        {
            SetColors1[12] = 9;
        }
        if (counter1 == 14)
        {
            SetColors1[13] = 9;
        }
        if (counter1 == 15)
        {
            SetColors1[14] = 9;
        }
        if (counter1 == 16)
        {
            SetColors1[15] = 9;
        }
        if (counter1 == 17)
        {
            SetColors1[16] = 9;
        }
        if (counter1 == 18)
        {
            SetColors1[17] = 9;
        }
        if (counter1 == 19)
        {
            SetColors1[18] = 9;
        }
        if (counter1 == 20)
        {
            SetColors1[19] = 9;
        }
        if (counter1 == 21)
        {
            SetColors1[20] = 9;
        }
        if (counter1 == 22)
        {
            SetColors1[21] = 9;
        }
    }
}

// Dynamic Main Menu
void DynamicMenu()
{
    int SetColors[] = { 7,7,7,7,7 }; // DEFAULT COLORS
    int counter = 3;
    char key;

    for (int i = 0;;)
    {
        gotoxy(100, 17); //The coordinates for the options
        color(SetColors[0]);
        std::cout << " 1. Calculator Menu" << std::endl;

        gotoxy(100, 18);
        color(SetColors[1]);
        std::cout << " 2. Game" << std::endl;

        gotoxy(100, 19);
        color(SetColors[2]);
        std::cout << " 3. Guide" << std::endl;

        gotoxy(100, 20);
        color(SetColors[3]);
        std::cout << " 4. Exit" << std::endl;


        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 4))//72 is for the up arrow
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 3))//80 is for the down arrow
        {
            counter++;
        }
        if (key == '\r')//carriage return aka reset the position of the device to the beginning of a line of text
        {
            // if enter is clicked and highlight is on one of the options the program will run the code there

            if (counter == 1)
            {
                system("CLS");
                CalcMenu();
            }
            if (counter == 2)
            {
                system("cls");
                game();
            }
            if (counter == 3)
            {
                system("CLS");
                guide();
                homeScreen();
            }
            if (counter == 4)
            {
                system("CLS");
                break;
            }
        }
        //once again 7 is used to SetColors the default colors if we are no longer on our corresponding option
        SetColors[0] = 7;
        SetColors[1] = 7;
        SetColors[2] = 7;
        SetColors[3] = 7;
        SetColors[4] = 7;


        //if our counter equals to one of the corresponding numbers for the menu the color is changed to blue which is 9
        if (counter == 1)
        {
            SetColors[0] = 9;
        }
        if (counter == 2)
        {
            SetColors[1] = 9;
        }
        if (counter == 3)
        {
            SetColors[2] = 9;
        }
        if (counter == 4)
        {
            SetColors[3] = 9;
        }
    }
}