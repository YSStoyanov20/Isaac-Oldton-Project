#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>

using namespace std;

void checkHealth(int health)
{
    if (health == 0)
    {
        system("cls");
        cout << "You won! Congratulations! The Evil wizard got his powers removed and is now nothing more than dust.";
    }
    else
    {
        system("cls");
        cout << "You failed. The Evil Wizard has defeated you. Darkness and sorrow now reign the world.";
    }
}


void game()
{
    int health = 100;

    string useranswer;

    // questions

    string questions[12] = { "What is the correct formula for acceleration?","What is the correct speed formula?", "What is the correct formula for Electricity?",
        "What is the correct formula for Voltage?","What is the correct formula for Pressure?", "What is the correct formula to calculate Distance?",
        "What is the correct formula for Friction?","What is the correct formula for Kinetic Energy?",
        "What is the formula for Mass?","What is the correct formula for Potential Energy?"};

    //the true answers of the corresponding questions

    string trueAnswers[12] = { "(V-V0)/t", "S/t", "W/V", "i*r", "F/S", "V*t","k*N","1/2*m*v*v","m*a","m*g*h*"};
    srand(time(NULL));

    for (int i = 0; i <= 9; i++)
    {
        int rng = rand() % 10 + 1;
        system("cls");

        cout << questions[rng] << endl;
        getline(cin, useranswer, '\n');

        if (useranswer == trueAnswers[rng])
        {
            health -= 10;
            cout << endl << "true" << endl;
        }

        cout << health << " " << i << endl;
    }
    checkHealth(health);
}


int main()
{
    game();

}