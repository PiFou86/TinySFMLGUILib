#include <iostream>

#include "demo01/Demo01.h"

#include <Window/Window.h>

#include <direct.h>

int main()
{
    std::cout << "Path: " << _getcwd(0, NULL) << std::endl;
    Demo01 demo01;

    demo01.show();
}
