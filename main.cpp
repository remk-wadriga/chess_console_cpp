#include <iostream>
#include "./src/AbstractFigure.cpp"
#include "./src/figures/Bishop.cpp"
#include "./src/figures/King.cpp"
#include "./src/figures/Knight.cpp"
#include "./src/figures/Pawn.cpp"
#include "./src/figures/Queen.cpp"
#include "./src/figures/Rook.cpp"
#include "./src/Cell.cpp"
#include "./src/Field.cpp"
#include "./src/AbstractDrawer.cpp"
#include "./src/drawers/ConsoleDrawer.cpp"
#include "./src/Game.cpp"

int main()
{
    using namespace std;

    Game game(new Field(), new ConsoleDrawer());
    game.start();

    return 0;
}