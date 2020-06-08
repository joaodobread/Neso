#include "./Menu.h"

Menu::Menu(String *__menu_options, unsigned int __menu_size)
{
  if (!__menu_size)
    return;
  this->options = __menu_options;
  this->menuSize = __menu_size;
  this->actualOption = 0;
}

void Menu::nextPosition()
{
  if (this->actualOption + 1 < this->menuSize)
    this->actualOption++;
}

void Menu::previousPosition()
{
  if (this->actualOption > 0)
    this->actualOption--;
}

String Menu::getActualMenuItem()
{
  return this->options[this->actualOption];
}

unsigned int Menu::getActualMenuPosition()
{
  return this->selectedOption;
}

void Menu::selectMenuItem() {
  this->selectedOption = this->actualOption;
}

void * Menu::exitMenu() {
  this->actualOption = 0;
  this->selectedOption = 0; 
  return NULL;
}