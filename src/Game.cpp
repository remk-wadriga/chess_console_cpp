#include <iostream>

class Game {
public:
    Game(Field* field, AbstractDrawer* drawer)
    {
        _field = field;
        _drawer = drawer;
    }

    void start()
    {
        _drawer->drawGameField(_field);
    }

private:
    Field* _field;
    AbstractDrawer* _drawer;
};