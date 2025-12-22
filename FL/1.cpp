#include <FL/Fl.h>
#include <FL_Window.h>
#include <FL_Output.h>
#include <FL_Input.h>
#include <Fl_Button.h>

int main() {
    Fl_Window* main_win = new Fl_Window(1920, 1080, "Hello World!");

    Fl_Output* main_text = new Fl_Output(100, 50, 40, 50, "Hello World!");

    main_win->end();
    main_win->show();

    return Fl::run();
}
