#include <iostream>
#include "process.h"
#include "graphics.h"
#include "show_Result.h"
using std::cout, std::endl;

int main()
{
    cout << "planning stare" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;

    ShowResult show;
    show.drawResult();

    return 0;

}