#include <iostream>
#include <locale.h>
using namespace std;

class TPen {
	private:
	string color;
	public:
	string getColor();
	void setColor(string newColor)
	{
    	if (newColor.length() != 6)
        	color = "FFFFFF";
    	else if (newColor == "5b92e5") {
        	cout << "YES!";
    	}
    	else color = newColor;
	}
};

string TPen::getColor() { 
return color; 

int main() {
	setlocale(LC_ALL, "RU");
	cout << "Enter (set) the color of the UN flag:" << endl; //5b92e5
	TPen pen;
	string a;
	cin >> a;
	pen.setColor(a);
	cout << pen.getColor() << endl;

	return 0;
}