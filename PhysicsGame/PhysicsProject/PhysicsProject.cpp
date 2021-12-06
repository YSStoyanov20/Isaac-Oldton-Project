#include "Functions.h"

int main()
{
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximizes the console window
    LoadingScreen();//Displays the loading screen
    homeScreen();//Displays the home screen
    DynamicMenu();//Displays the dynamic menu
}