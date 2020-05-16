#include <iostream>

enum Color {COLOR_BLACK, COLOR_WHITE};

class Cell
{
public:
    Cell(std::string coordinate, Color color)
    {
        _coordinate = coordinate;
        _color = color;
    }

    std::string getCoordinate()
    {
        return _coordinate;
    }

    Color getColor()
    {
        return _color;
    }
private:
    std::string _coordinate;
    Color _color;
};