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
int main() {}