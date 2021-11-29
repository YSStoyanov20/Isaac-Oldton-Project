#include <iostream>

using namespace std;

void guide()
{
    std::cout << "\t\t  _____                         ____  _     _ _              " << std::endl;
    std::cout << "\t\t |_   _|                       / __ \\| |   | | |             " << std::endl;
    std::cout << "\t\t   | |  ___  __ _  __ _  ___  | |  | | | __| | |_ ___  _ __  " << std::endl;
    std::cout << "\t\t   | | / __|/ _` |/ _` |/ __| | |  | | |/ _` | __/ _ \\| '_ \\ " << std::endl;
    std::cout << "\t\t  _| |_\\__ \\ (_| | (_| | (__  | |__| | | (_| | || (_) | | | |" << std::endl;
    std::cout << "\t\t |_____|___/\\__,_|\\__,_|\\___|  \\____/|_|\\__,_|\\__\\___/|_| |_|" << std::endl << std::endl;

    cout << "   This is a guide for Isaac Oldton: The Game" << endl << endl;
    cout << " * If you have to write a number that is raised to a power, write like this: " << endl;
    cout << " * X^2 => x*x, X^3 => x*x*x and so on..." << endl;
    cout << " * To write a fractional number, type it as x/y." << endl;
}

int main()
{
    guide();
}