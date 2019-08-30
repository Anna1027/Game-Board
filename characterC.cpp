#include "characterC.h"
#include <string>

CharacterC::CharacterC(std::string charname):
Character (charname)
{
set_start_position();
set_move();
}
char  CharacterC::get_ID()const{
  return 'W';
}
void CharacterC::set_start_position(){
row=6;
col=7;
}
 void CharacterC:: set_move(){
   move_horizontal=9;
   move_vertical=10;
 }
