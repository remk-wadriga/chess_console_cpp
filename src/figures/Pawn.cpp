#include <iostream>

class Pawn : public AbstractFigure
{
public:
    Pawn(Color color)
    {
        _type = PAWN;
        _name = "Pawn";
        _color = color;
    }
};