#include "characterA.h"
#include <string>

CharacterA::CharacterA(std::string charname):
Character (charname)
{
set_start_position();
set_move();
}
char CharacterA::get_ID()const{
  return 'Y';
}
void CharacterA::set_start_position(){
row=8;
col=9;
}
 void CharacterA:: set_move(){
   move_horizontal=2;
   move_vertical=3;
 }


