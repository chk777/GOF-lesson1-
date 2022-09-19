
#include <conio.h>
#include <windows.h>

#include "SBomber.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

//========================================================================================================================

int main(void)
{
    MyTools::OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        ScreenSingleton::GetInstance().ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();

    } while (!game.GetExitFlag());

    MyTools::CloseLogFile();

    return 0;
}
