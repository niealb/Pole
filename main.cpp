#include "edit.h"
#include "ccolor.h"

int main()
{
	Edit e;
	e.setPosition(7, 3);
	e.setLength(6)
	e.setText("Ala");
	e.setTextColor(Edit::White);
	e.setBackgroundColor(Edit::Blue);
	e.display();
	string s = e.getText();
	e.userText();
	s = e.getText();

	cout << "A" << red << "L" << blue << "a"
		 << green << "ma" << "kota";
	cout << setColor(FOREGROUND_RED | BACKGROUND_GREEN) << "Miauu"
		 << defcolor << "XYZYW";
	return 0;
}