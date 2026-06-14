#include <iostream>
#include "show_result.h"
#include <graphics.h>

void ShowResult::drawResult()
{
    initgraph(1000, 1000);
    setbkcolor(WHITE);
    cleardevice();

    std::cout<<"draw circles: "<<std:: endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 400);
    circle(500, 500, 300);

    system("pause   ");
}