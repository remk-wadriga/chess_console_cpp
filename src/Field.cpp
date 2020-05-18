#include <iostream>

class Field
{
public:
    Field()
    {
        for (int x = 0; x < 8; x++) {
        	for (int y = 0; y < 8; y++) {
        		addCell(x, y);
        	}
        }
    }

    char getLetter(int x)
    {
        return _letters[x];
    }

    Cell* getCell(int x, int y)
    {
        return _cells[x][y];
    }
private:
    char _letters[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    Cell* _cells[8][8];

    void addCell(int x, int y)
    {
        _cells[x][y] = new Cell(calculateCoordinate(x, y), calculateCellColor(x, y));
        if (x == 0 && y == 0) {
            _cells[x][y]->setFigure(new Pawn(COLOR_WHITE));
        }
    }

    std::string calculateCoordinate(int x, int y)
    {
        using namespace std;
        string letter = "";
        letter.push_back(getLetter(x));
        return letter + to_string(y + 1);
    }

    Color calculateCellColor(int x, int y)
    {
        int res = x % 2 + y % 2;
        return res % 2 == 0 ? COLOR_BLACK : COLOR_WHITE;
    }
};