#include "window.h"
#include <iostream>

#define WIDTH 1280
#define HEIGHT 720

using namespace std;

int main(int argc, char **argv)
{
    Window *w = new Window();
    w->Create("test", WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

    while (true)
    {
    };
}
