#include <iostream>

enum Color {COLOR_BLACK, COLOR_WHITE};
enum FigureType {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

class AbstractFigure
{
public:
    AbstractFigure() {};
    AbstractFigure(Color color)
    {
        _color = color;
    }

    FigureType getType()
    {
        return _type;
    }

    Color getColor()
    {
        return _color;
    }

    std::string getName()
    {
        return _name;
    }
protected:
    FigureType _type;
    Color _color;
    std::string _name;
};