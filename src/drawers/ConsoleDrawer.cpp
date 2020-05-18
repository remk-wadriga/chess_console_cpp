#include <iostream>
#include <string>

using namespace std;

#define U_WHITE_SQUARE "\u25A0"
#define U_BLACK_SQUARE "\u2610"

#define U_FIGURE_KING_BLACK "\u2654";
#define U_FIGURE_QUEEN_BLACK "\u2655";
#define U_FIGURE_ROOK_BLACK "\u2656";
#define U_FIGURE_BISHOP_BLACK "\u2657";
#define U_FIGURE_KNIGHT_BLACK "\u2658";
#define U_FIGURE_PAWN_BLACK "\u2659";

#define U_FIGURE_KING_WHITE "\u265A";
#define U_FIGURE_QUEEN_WHITE "\u265B";
#define U_FIGURE_ROOK_WHITE "\u265C";
#define U_FIGURE_BISHOP_WHITE "\u265D";
#define U_FIGURE_KNIGHT_WHITE "\u265E";
#define U_FIGURE_PAWN_WHITE "\u265F";

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
        AbstractFigure* figure = cell->getFigure();
        if (figure == NULL) {
            cout << U_WHITE_SQUARE;
        } else {
            cout << U_FIGURE_PAWN_WHITE;
        }
    }
private:
    void drawTopSection()
    {
        drawLines(2, 31, '*');
        cout << "\n";
        //drawLetters();
        //cout << "\n";
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