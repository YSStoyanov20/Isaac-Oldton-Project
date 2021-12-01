#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include "Functions.h"


struct QUESTIONS {
    std::string text;
    bool isAsked;
};

void PrintWizard()
{
    std::cout << "          ..                               .:::.    " << std::endl;
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
    std::cout << "         :.-::::++%#:::==-+*+=--=:=:=-           ,---.         ,--.                                            ,-----.                          ,--.   " << std::endl;
    std::cout << "           :---#%##%-:-:=:-=-::=:::=--           '   .-'  ,---. |  |,--.  ,--.,---.    ,--,--,--.,--. ,--.    '  .-.  '  ,--.,--. ,---.  ,---.,-'  '-.   " << std::endl;
    std::cout << "          .##%+%#%%%#::-=::::::==::+             `.  `-. | .-. ||  | \\ `'  /| .-. :    |        | \\  '  /     |  | |  |  |  ||  || .-. :(  .-''-.  .-'   " << std::endl;
    std::cout << "        -*%#%%####%#%.:*::.:::::+:-              .-'    |' '-' '|  |  \\    / \\   --.   |  |  |  |  \\   '      '  '-'  '-.'  ''  '\\   --..-'  `) |  |,--. " << std::endl;
    std::cout << "     -::%=+:+++==+##%=.+:.::::::=-=              `-----'  `---' `--'   `--'   `----'   `--`--`--'.-'  /        `-----'--' `----'  `----'`----'  `--''-,/ " << std::endl;
    std::cout << "      .**-=--::#%#####--::::::::-#:                                                          ,---.`---'                                                   " << std::endl;
    std::cout << "      *%%%#*#%@@@%%%###::::::::=#%:               ,-----. ,------.     ,------.  ,--.,------.|   |  " << std::endl;
    std::cout << "     :%%%#%##%*#%@@@@%##-::::::#%=               '  .-.  '|  .--. '    |  .-.  \\ |  ||  .---'|  .' " << std::endl;
    std::cout << "      %%#%##%=*####%%@@@%=::::+@%:               |  | |  ||  '--'.'    |  |  \\  :|  ||  `--, |  |  " << std::endl;
    std::cout << "      %%#%%%+ %##%%%###%%%*::-%%#%.              '  '-'  '|  |\\  \\     |  '--'  /|  ||  `---.`--'    " << std::endl;
    std::cout << "     *%%%#- .%#####%%###%%=:#%##%=                `-----' `--' '--'    `-------' `--'`------'.--.     " << std::endl;
    std::cout << "       ::.   -%###%#######%#-%###%#                                                           '--'    " << std::endl;
    std::cout << "             *%############%%#####%=              " << std::endl;
    std::cout << "            .%%#%##%#######%#######%-             " << std::endl;
    std::cout << "            *###%###################*             " << std::endl << std::endl;
}

void checkHealth(int health)
{
    if (health == 0)
    {
        system("cls");
        std::cout << "You won! Congratulations! The Evil wizard got his powers removed and is now nothing more than dust.";
    }
    else
    {
        system("cls");
        std::cout << "You failed. The Evil Wizard has defeated you. Darkness and sorrow now reign the world.";
    }
}


void game()
{
    int health = 100;

    std::string useranswer;

    // questions

    std::string questionsString[10] = { "What is the correct formula for acceleration?","What is the correct speed formula?", "What is the correct formula for Electricity?",
        "What is the correct formula for Voltage?","What is the correct formula for Pressure?", "What is the correct formula to calculate Distance?",
        "What is the correct formula for Friction?","What is the correct formula for Kinetic Energy?",
        "What is the formula for Mass?","What is the correct formula for Potential Energy?" };
    QUESTIONS questions[10];

    for (int i = 0; i < 10; i++)
    {
        questions[i].text = questionsString[i];
        questions[i].isAsked = false;
    }

    //the true answers of the corresponding questions
    std::string trueAnswers[10] = { "(V-V0)/t", "S/t", "W/V", "i*r", "F/S", "V*t","k*N","1/2*m*v*v","m*a","m*g*h*" };

    srand(time(NULL));

    for (int i = 0; i <= 9; i++)
    {
        PrintWizard();
        int rng = rand() % 10;

        while (questions[rng].isAsked == true)
        {
            rng = rand() % 10;
        }

        std::cout << questions[rng].text << std::endl;

        getline(std::cin, useranswer, '\n');

        if (useranswer == trueAnswers[rng])
        {
            health -= 10;
            questions[rng].isAsked = true;
            std::cout << std::endl << "true" << std::endl;
        }
        system("cls");
    }
    checkHealth(health);

}

void guide()
{
    std::cout << "\t\t  _____                         ____  _     _ _              " << std::endl;
    std::cout << "\t\t |_   _|                       / __ \\| |   | | |             " << std::endl;
    std::cout << "\t\t   | |  ___  __ _  __ _  ___  | |  | | | __| | |_ ___  _ __  " << std::endl;
    std::cout << "\t\t   | | / __|/ _` |/ _` |/ __| | |  | | |/ _` | __/ _ \\| '_ \\ " << std::endl;
    std::cout << "\t\t  _| |_\\__ \\ (_| | (_| | (__  | |__| | | (_| | || (_) | | | |" << std::endl;
    std::cout << "\t\t |_____|___/\\__,_|\\__,_|\\___|  \\____/|_|\\__,_|\\__\\___/|_| |_|" << std::endl << std::endl;

    std::cout << "   This is a guide for Isaac Oldton: The Game" << std::endl << std::endl;
    std::cout << " * If you have to write a number that is raised to a power, write like this: " << std::endl;
    std::cout << " * X^2 => x*x, X^3 => x*x*x and so on..." << std::endl;
    std::cout << " * To write a fractional number, type it as x/y." << std::endl << std::endl;
    std::cout << " * List of used symbols: " << std::endl << std::endl;

    std::cout << "   > Acceleration - a" << std::endl;
    std::cout << "   > Final Velocity- V" << std::endl;
    std::cout << "   > Friction- f" << std::endl;
    std::cout << "   > Force- F " << std::endl;
    std::cout << "   > Gravity- g" << std::endl;
    std::cout << "   > Height- h" << std::endl;
    std::cout << "   > Electricity- I" << std::endl;
    std::cout << "   > Energy- J" << std::endl;
    std::cout << "   > Kinetic Energy- Ek" << std::endl;
    std::cout << "   > Mechanical Energy- Em" << std::endl;
    std::cout << "   > Mass- m" << std::endl;
    std::cout << "   > Resistance- R" << std::endl;
    std::cout << "   > Surface- S" << std::endl;
    std::cout << "   > Time- T" << std::endl;
    std::cout << "   > Start Velocity- V0" << std::endl;
}