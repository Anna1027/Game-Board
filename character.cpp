#include "character.h"
#include <iostream>
#include <sstream>

Character::Character(std::string charname):
name{charname}
{
set_start_position();
set_move();

}
char Character::get_ID()const{
  return 'X';
}
std::string Character::get_name()const{
  return name;
}
std::string Character::get_position()const{
  std::ostringstream output;
  output<<row<<":"<<col;
  return output.str();
}
void Character::set_start_position(){
  row=3;
  col=5;
}
void Character::set_move(){
  move_horizontal=3;
  move_vertical=5;
}


