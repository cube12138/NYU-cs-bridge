#include <iostream>
using namespace std;

int main()
{
	double price_1, price_2, tax, base_price, price_discount, total_price, process_price;
	char club_card;

	price_discount = 1;
	cout << "Enter price of first item: ";
	cin >> price_1;
	cout << "Enter price of second item: ";
	cin >> price_2;
	cout << "Does customer have a club card? (Y/N): ";
	cin >> club_card;
	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin >> tax;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	base_price = price_1 + price_2;
	if (club_card == 'Y' || club_card == 'y')
	{
		if (price_1 >= price_2)
			process_price = price_1 + price_2 / 2;
		else
			process_price = price_2 + price_1 / 2;
		price_discount = 0.9 * process_price;
	}
	else if (club_card == 'N' || club_card == 'n')
	{
		if (price_1 >= price_2)
			process_price = price_1 + price_2 / 2;
		else
			process_price = price_2 + price_1 / 2;
		price_discount = process_price;
	}
	total_price = price_discount * (1 + tax / 100);



	cout << "Base price: " << base_price << endl;
	cout << "Price after discounts: " << price_discount << endl;
	cout << "Total price: " << total_price << endl;


	return 0;
}