#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>


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

int main()
{
    system("mode 700");
    game();
}