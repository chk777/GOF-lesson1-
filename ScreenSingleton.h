#pragma once

#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <time.h> 

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

class ScreenSinglton
{
public:
    static ScreenSingleton& GoInstance() {
      static ScreenSingleton instance;
      return instance;
      }
      void ClrScr();
      uint16_t GetMaxX();
      uint16_t GetMaxY();
      void __fastcall GotoXY(double x, double y);

private:
    ScreenSingleton() {};
    ScreenSingleton(const ScreenSingleton& a) = delete;
    ScreenSingleton& operator=(const ScreenSingleton& a) = delete;
};
