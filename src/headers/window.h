#pragma once
#include "logger.h"
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <string>
#include <iostream>

using namespace std;

class Window {
public:
	Window();
	~Window();

	int Create(string windowName, int screenWidth, int screenHeight);
	int GetScreenWidth() const {
		return m_screenWidth;
	}
	int GetScreenHeight() const {
		return m_screenHeight;
	}
	void SwapBuffer();

private:
	SDL_Window *m_SDL_Window;
	unsigned int m_screenWidth;
	unsigned int m_screenHeight;
};

Window::Window() {
	SDL_Init(SDL_INIT_EVERYTHING);
}

Window::~Window() {
	SDL_DestroyWindow(m_SDL_Window);
	SDL_Quit();
}

int Window::Create(string windowName, int screenWidth, int screenHeight) {
	try {
		// Open an SDL window
		m_SDL_Window = SDL_CreateWindow(windowName.c_str(),
				SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth,
				screenHeight);
		if (m_SDL_Window == nullptr)
			throw Exception("[E] SDL Window could not be created!");

		// Set the background color to blue
		glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

	} catch (Exception e) {
		// Write Log
		WriteLog(LogType::ERROR, e.reason);
	}

	return 0;
}

void Window::SwapBuffer() {
	SDL_GL_SwapWindow(m_SDL_Window);
}
