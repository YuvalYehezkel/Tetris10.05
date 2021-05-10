#include "Computer.h"

char Computer::ChooseComputerLevel()
{
	char key_char = 0;
	gotoxy(30, 9);
	cout << "Hi! please enter the level of the computer:" << endl;
	gotoxy(30, 10);
	cout << "for the BEST level press (1)" << endl;
	gotoxy(30, 11);
	cout << "for the GOOD level press (2)" << endl;
	gotoxy(30, 12);
	cout << "for the NOVICE level press (3)" << endl;
	while (1)
	{
		if (_kbhit())
		{
			key_char = _getch();
			return key_char;
		}
	}
}
void Computer::LessSpaces(general* f)
{
	//Point& res ;
	for (int i = ROWS; i > 0; i--)
	{
		for (int j = COLS + 2; j < 2 * COLS + 3; j++)
		{
			if (GameBoard.isValidPoint(j, i))
			{
				for (int count = 0; count < f->getSize(); count++)
				{
					Point& res = f->getBodyPos(count);// צריכות לממש את הפונקציה שמחזירה את הגוף של הצורה
					if ((GameBoard.isValidPoint(res.getX() - 1, res.gety())))
					{
						f->update(GameBoard, f->getSerial(), LEFT);
						break;
						//f.updateFigureLeft(GameBoard, f->getSerial());
					}
					else if (GameBoard.isValidPoint(res.getX() + 1, res.gety()) && GameBoard.isValidPoint(res.getX(), res.gety() + 1))
					{
						f->update(GameBoard, f->getSerial(), RIGHT);
						break;
					}
					break;
					// else if right // else if rotate // else if counterrotate
				}
			}
		}
	}
}

