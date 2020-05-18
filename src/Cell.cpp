#include <iostream>

class Cell
{
public:
    Cell(std::string coordinate, Color color)
    {
        _coordinate = coordinate;
        _color = color;
        _figure = NULL;
    }

    std::string getCoordinate()
    {
        return _coordinate;
    }

    Color getColor()
    {
        return _color;
    }

    void setFigure(AbstractFigure* figure)
    {
        _figure = figure;
    }
    AbstractFigure* getFigure()
    {
        return _figure;
    }
private:
    std::string _coordinate;
    Color _color;
    AbstractFigure* _figure;
};