#include <string>
#include <iostream>

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
friend class Gameboard;

 public: 
 Character(std::string="unknown player");
 virtual void set_start_position();
 virtual void  set_move(); 
 virtual char get_ID() const=0;
 std::string get_name()const;
 std::string get_position()const ;
 
protected: 
 std::string name;
 int row;
 int col;
 int move_horizontal;
 int move_vertical;

};
#endif
