#include "gameboard.h"
#include "character.h"
#include "characterA.h"
#include "characterB.h"
#include "characterC.h"
#include <iostream>

int main() {
  
  Gameboard board{"GAME-BOARD"}; // create board
  CharacterA player1{"Player1"}; // create character 
  CharacterB player2{"Player2"};
  CharacterC player3{"Player3"}; 
  board.addPlayer(&player1); // add player to board
  board.addPlayer(&player2);
  board.addPlayer(&player3);
  board.display(); // show board

  for (int i = 1; i <= 10; i++){ // 10 moves
    board.update(); // move all players
    board.display(); // show the updated board
  }
}


