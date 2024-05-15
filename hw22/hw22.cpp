#include "Time.h"

int main()
{
	Time_ a;
	Time_ b(15, 30, 41, 0);

	a.showTime();
	a -= 50;
	a = a + 12.0f;
	a += 15L;
	a.showTime();
	b.showTime();
	if (a > b) cout << "na > b";
	else if (a < b) cout << "a < b";
	else cout << "same";

}