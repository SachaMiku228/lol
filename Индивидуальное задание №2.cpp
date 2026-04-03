#include <iostrem>
using namespace std;

int main() 
{
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if (abs(x) + abs(y) < 9)
	    cout << "Да";
	else if (abs(x) + abs(y) > 9)
	    cout << "Нет";
	else 
	    cout << "На границе";
	return 0;
	

}
