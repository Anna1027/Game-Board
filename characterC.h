#include "character.h"
#include <iostream>
#include <sstream>

#ifndef CHARACTERC_H
#define CHARACTERC_H

class CharacterC :public Character {
friend class Gameboard;
public:
CharacterC(std::string="unknown player");
virtual char get_ID() const override;
virtual void set_start_position ()  override;
virtual void set_move()  override;


};
#endif


