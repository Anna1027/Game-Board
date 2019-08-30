#include "character.h"
#include <iostream>
#include <sstream>

#ifndef CHARACTERB_H
#define CHARACTERB_H

class CharacterB : public Character {
friend class Gameboard;
public:
CharacterB(std::string="unknown player");
virtual char get_ID() const override;
virtual void set_start_position ()  override;
 virtual void set_move() override;


};
#endif

