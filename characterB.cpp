#include "characterB.h"
#include <string>

CharacterB::CharacterB(std::string charname):
Character (charname)
{
set_start_position();
set_move();
}
char  CharacterB::get_ID()const{
  return 'Z';
}
void CharacterB::set_start_position(){
row=3;
col=4;
}
 void CharacterB:: set_move(){
   move_horizontal=4;
   move_vertical=5;
 }
