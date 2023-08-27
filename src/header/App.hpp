#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#pragma once

class App{
    
    private:
        int x, y, w, h;
        std::string title;
        //Window
        //Renderer

    public:
        App();
        ~App();
        //Application(std::string title, int x, int y, int w, int h);
        //Init application
        //void Init();
        //void Input(); //make virtual?
        //Run application (virtual)
        //virtual void Run();


};