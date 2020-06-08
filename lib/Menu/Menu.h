#ifndef MENU_H
#define MENU_H

#include <Arduino.h>
#include <stdlib.h>

class Menu {
  private: 
    String *options;
    unsigned int menuSize;
    unsigned int actualOption;
    unsigned int selectedOption;

  public:
    Menu(String * __menu_options, unsigned int __menu_size);
    void nextPosition();
    void previousPosition();
    String getActualMenuItem();
    unsigned int getActualMenuPosition();
    void selectMenuItem();
    void * exitMenu();


};

#endif