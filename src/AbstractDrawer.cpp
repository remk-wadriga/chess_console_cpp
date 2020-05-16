#include <iostream>

class AbstractDrawer
{
public:
    virtual void drawGameField(Field* field) = 0;
    virtual void drawFieldCell(Cell* cell) = 0;

protected:
    Field* _field;
};