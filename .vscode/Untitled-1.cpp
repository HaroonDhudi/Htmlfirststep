#include <iostream>
using namespace std;
class ReverseNumber
 {
public:
	
    int num, rev;

    void getNumber() 
	{
        cout << "Enter any positive no. ";
        cin >> num;
    }
    
    void reverse() 
	{
        int Remainder;
        rev = 0;
        
        while(num != 0) 
		{
            remainder = num % 10;
            rev = rev * 10 + remainder;
            num /= 10;
        }
        
        cout << "Reverse of [ " << num << " ] is " << rev << endl;
    }
};

int main() 
{
    ReverseNumber  Number;
    Number.getNumber();
    Number.reverse();

    return 0;
}

