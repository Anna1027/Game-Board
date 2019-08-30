#include "character.h"
#include <iostream>
#include <sstream>

#ifndef CHARACTERA_H
#define CHARACTERA_H

class CharacterA : public Character{
friend class Gameboard;
public:
CharacterA(std::string="unknown player");
virtual char get_ID() const override;
virtual void set_start_position () override;
virtual void set_move()  override;


};
#endif
