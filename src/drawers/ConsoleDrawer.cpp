#include <iostream>
#include <string>

using namespace std;

class ConsoleDrawer : public AbstractDrawer
{
public:
    void drawGameField(Field* field)
    {
        _field = field;
        drawTopSection();

        for (int x = 0; x < 8; x++) {
            cout << "* " << x + 1 << "  ";
        	for (int y = 0; y < 8; y++) {
                drawFieldCell(field->getCell(x, y));
                cout << "  ";
        	}
            cout << "**\n";
        }

        drawBottomSection();
    }

    void drawFieldCell(Cell* cell)
    {
        cout << "&";
    }
private:
    void drawTopSection()
    {
        drawLines(2, 31, '*');
        cout << "\n";
        drawLetters();
        cout << "\n";
    }

    void drawBottomSection()
    {
        drawLetters();
        cout << "\n";
        drawLines(2, 31, '*');
        cout << "\n";
    }

    void drawLines(int lines, int chars, char chr)
    {
        string line(chars, chr);
        for (int i = 0; i < lines; i++) {
        	cout << line;
        	if (i < lines - 1) {
        	    cout << "\n";
        	}
        }
    }

    void drawLetters()
    {
        cout << "***  ";
        for (int i = 0; i < 8; i++) {
            cout << _field->getLetter(i) << "  ";
        }
        cout << "**";
    }
};