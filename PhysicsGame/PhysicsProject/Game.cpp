#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include "Functions.h"


struct QUESTIONS {
    std::string text;
    bool isAsked;
};


std::string SelectCharacter()
{
    int arrow = 0;
    bool choice = true;
    std::string Characters[3] = { "Wilhelm", "Peter", "Maria" };
    while (choice)
    {
        color(7);
        std::cout << " Choose your character with Spacebar" << std::endl << std::endl;
        if (arrow == 0)
        {
            color(9);
            std::cout << " --> \t" << Characters[0] << std::endl;
            color(8);
            std::cout << " " << Characters[1] << std::endl;
            std::cout << " " << Characters[2] << std::endl;
        }

        if (arrow == 1)
        {
            color(8);
            std::cout << " " << Characters[0] << std::endl;
            color(6);
            std::cout << " --> \t" << Characters[1] << std::endl;
            color(8);
            std::cout << " " << Characters[2] << std::endl;
        }
        if (arrow == 2)
        {
            color(8);
            std::cout << " " << Characters[0] << std::endl;
            std::cout << " " << Characters[1] << std::endl;
            color(13);
            std::cout << " --> \t" << Characters[2] << std::endl;
        }
        color(7);

        system("PAUSE>NULL");

        if (GetAsyncKeyState(VK_UP))
        {
            if (arrow == 0)
            {
                Sleep(0);
            }
            else
            {
                arrow--;
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            if (arrow == 2)
            {
                Sleep(0);
            }
            else
            {
                arrow++;
            }
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            if (arrow == 0)
            {
                system("CLS");
                return Characters[0];
            }
            if (arrow == 1)
            {
                system("CLS");
                return Characters[1];
            }
            if (arrow == 2)
            {
                system("CLS");
                return Characters[2];
            }
        }
        system("CLS");
    }


}

std::string CharacterCheck(std::string CharName)
{
    srand(time(NULL));
    int replique = rand() % 5;
    if (CharName == "Wilhelm")
    {
        std::string Dialogue[5] = { "a", "b", "c", "d", "e" };
        color(9);
        return Dialogue[replique];
    }
    if (CharName == "Peter")
    {
        std::string Dialogue[5] = { "f", "g", "h", "w", "j" };
        color(6);
        return Dialogue[replique];
    }
    if (CharName == "Maria")
    {
        std::string Dialogue[5] = { "f", "g", "h", "w", "j" };
        color(13);
        return Dialogue[replique];
    }
}


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
void WinScreen()
{
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t          _______                      _______  _        _ " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t|\\      /|(  ___ )|\\     /|  |\\     /|(  ___  )( (    /|( )" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t( \\   / )| (   ) || )   ( |  | )   ( || (   ) ||  \\ (  || |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t \\ (_) / | |   | || |   | |  | | _ | || |   | ||   \\ | || |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t  \\   /  | |   | || |   | |  | |( )| || |   | || (\\ \\) || |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t   ) (   | |   | || |   | |  | || || || |   | || | \\   |(_)" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t   | |   | (___) || (___) |  | () () || (___) || )  \\  | _ " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t   \\_/   (_______)(_______)  (_______)(_______)|/    )_)(_)" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t                                                          " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t    Press any key to return to Menu..." << std::endl;
    system("pause>null");
}

void DefeatScreen()
{
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t  ______   _______  _______  _______  _______ _________ _ " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t (  __  \\ (  ____ \\(  ____ \\(  ____ \\(  ___  )\\__   __/( )" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t | (  \\  )| (    \\/| (    \\/| (    \\/| (   ) |   ) (   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |   ) || (__    | (__    | (__    | (___) |   | |   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |   | ||  __)   |  __)   |  __)   |  ___  |   | |   | |" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t | |   ) || (      | (      | (      | (   ) |   | |   (_)" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t | (__/  )| (____/\\\| )      | (____/ \| )   ( |   | |    _ " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t (______/ (_______/|/       (_______/|/     \\|   )_(   (_)" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t                                                            " << std::endl;
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t    Press any key to return to Menu..." << std::endl;
    system("pause>null");
}

void checkHealth(int health)
{
    if (health <= 20)
    {
        system("cls");
        WinScreen();
        system("cls");
        homeScreen();
    }
    else
    {
        system("CLS");
        DefeatScreen();
        system("cls");
        homeScreen();
    }
}
void Dialogue(int health)
{
    color(8);
    std::cout << " Isaac Evilton: ";
    if (health >= 80)
    {
        color(5);
        std::cout << "Your knowledge does nothing to me!" << std::endl;
    }
    else if (health >= 60 && health < 80)
    {
        color(5);
        std::cout << "Ooh, that hurt a bit!" << std::endl;
    }
    else if (health >= 40 && health < 60)
    {
        color(12);
        std::cout << "Okay, you are stronger than I've thought!" << std::endl;
    }
    else if (health >= 20 && health < 40)
    {
        color(12);
        std::cout << "But I am not letting you win!" << std::endl;
    }
    else if (health < 20)
    {
        color(4);
        std::cout << "Ooooh.... I feel very weak....." << std::endl;
    }
}


void game()
{
    int health = 100;

    std::string useranswer;
    std::string Characters = SelectCharacter();
    system("CLS");

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

    //the correct answers of the corresponding questions
    std::string trueAnswers[10] = { "(V-V0)/t", "S/t", "W/V", "I*r", "F/S", "V*t","k*N","(m*V*V)/2","m*g","m*g*h" };

    srand(time(NULL));

    for (int i = 0; i <= 9; i++)
    {
        PrintWizard();

        for (int j = 0; j < 150; j++)
        {
            std::cout << "-";
        }

        std::cout << std::endl << " Wizard's Health: " << health << "/100" << std::endl;
        std::cout << " Question: " << i + 1 << " /10" << std::endl << std::endl << " " << (char)249u;
        
        Dialogue(health);
        color(7);

        std::cout << " " << Characters << ": " << CharacterCheck(Characters) << std::endl;
        color(7);
        std::cout << std::endl;

        int rng = rand() % 10;

        while (questions[rng].isAsked == true)
        {
            rng = rand() % 10;
        }

        std::cout << " " <<  questions[rng].text << std::endl <<  "   > ";

        getline(std::cin, useranswer, '\n');

        if (useranswer == trueAnswers[rng])
        {
            health -= 10;
            questions[rng].isAsked = true;
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

    std::cout << "   > Acceleration    a" << std::endl;
    std::cout << "   > Final Velocity  V" << std::endl;
    std::cout << "   > Friction        f" << std::endl;
    std::cout << "   > Force           F " << std::endl;
    std::cout << "   > Gravity         g" << std::endl;
    std::cout << "   > Height          h" << std::endl;
    std::cout << "   > Electricity     I" << std::endl;
    std::cout << "   > Energy          J" << std::endl;
    std::cout << "   > Kinetic Energy  Ek" << std::endl;
    std::cout << "   > Mech. Energy    Em" << std::endl;
    std::cout << "   > Mass            m" << std::endl;
    std::cout << "   > Resistance      R" << std::endl;
    std::cout << "   > Surface         S" << std::endl;
    std::cout << "   > Time            T" << std::endl;
    std::cout << "   > Start Velocity  V0" << std::endl << std::endl;

    std::cout << " Press any key to return to Menu..." << std::endl;
    system("pause>null");
    system("cls");

}