#include<iostream>
using namespace std;
int main()
{
	int stock = 50;
	cout << "current Stock =" << stock << endl;

	while (true)
	{
		char action;
		cout << "Enter S For Sale . R for Restock .  Q for Quit" << endl;
		cin >> action;

		if (action == 'S' || action == 's')
		{
			int soldstock;
			cout << "Enter The Stock You Sold" << endl;
			cin >> soldstock;
			if (soldstock > 0 && soldstock <= 50)
			{
				stock = stock - soldstock;
				cout << "Reamainig Stock =" << stock << endl;
			}
			else if (soldstock < 10)
			{
				cout << "Warning: Restock The Stock Soon";
			}
			else
			{
				cout << "Sale Unsuccesfull";
			}
		}
		else if (action == 'R' || action == 'r')
		{
			int restoke;
			cout << "Enter The Restock Amount " << endl;
			cin >> restoke;

			stock = stock + restoke;
			cout << "Stock Is =" << stock << endl;
		}
		else if (action == 'Q' == action == 'q')
		{
			cout << "Thank You";
			break;
		}



	}

	return 0;
}