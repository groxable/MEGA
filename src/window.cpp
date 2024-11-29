#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <chrono>
#include <thread>
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

using namespace std::this_thread;	// to keep the window opened
using namespace std::chrono;		// to keep the window opened
using namespace std;

int main( int argc, char* args[] )
{
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "[E] SDL could not initialize! ->\n" << SDL_GetError();
    }
    else
       {
           //Create window
           window = SDL_CreateWindow("Test Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
           if(window == NULL)
           {
               cout << "[E] Window could not be created! ->\n" << SDL_GetError();
           }

           else
           {
               screenSurface = SDL_GetWindowSurface( window );
               SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );

               sleep_for(seconds(10));

               SDL_DestroyWindow( window );
               SDL_Quit();

               return 0;
           }

               SDL_UpdateWindowSurface( window );

               SDL_Event e;
               bool quit = false;
               while(quit == false)
               {
            	   while(SDL_PollEvent(&e))
            	   {
            		   if(e.type == SDL_QUIT) quit = true;
            	   }
               }
           }
       }
