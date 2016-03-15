#include <iostream>
#include "GameBoard.h"

int main() {
    GameBoard game;
    Player playerOne("P1", "RED");
    Player playerTwo("P2", "BLK");

    game.initBoard();

    string lastTile;
    lastTile = game.makeMove(playerOne, lastTile);
    lastTile = game.makeMove(playerTwo, lastTile);

    for(int i = 0; i < 7; i++) {
        lastTile = game.makeMove(playerOne, lastTile);
        if(game.checkForWinner()) {
            cout << playerOne.name << ": You win!" << endl;
            exit(0);
        }

        lastTile = game.makeMove(playerTwo, lastTile);
        if(game.checkForWinner()) {
            cout << playerTwo.name << ": You win!" << endl;
            exit(0);
        }
    }

    cout << "The match ends in tie!" << endl;
    return 0;
}