#include <iostream>
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