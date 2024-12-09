#include "headers/window.h"
#include "headers/logger.h"
#include <iostream>

#define WIDTH 1280
#define HEIGHT 720
#define WNAME "MEGA"

using namespace std;

int main(int argc, char **argv) {
	Window* w = new Window();
	w -> Create(WNAME, WIDTH, HEIGHT);
}
