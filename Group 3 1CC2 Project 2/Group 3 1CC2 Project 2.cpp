#include <iostream>
using namespace std;



//////////////////////
//Declare and Assign//
//////////////////////
int input;
int userID = 2413;
int password = 12345678;
bool loop = true;
bool error = false;
void login(),scanItem(),topUp(),billPayment(),checkout();
//Item name, price, and quantity
const string item1Name = "1kg Salt";
const double item1Price = 15000;
int item1Quantity = 100;
const string item2Name = "1kg Sugar";
const double item2Price = 10000;
int item2Quantity = 100;
const string item3Name = "1kg Beef";
const double item3Price = 115000;
int item3Quantity = 100;



////////////////
//Main program//
////////////////
int main()
{
	login();

option:
	system("cls");
	cout << " Cashier 1.0";
	cout << "\n Page: Main menu";
	cout << "\n\n\n Option:";
	cout << "\n 1.Scan Item";
	cout << "\n 2.Top up";
	cout << "\n 3.Bill payment";
	cout << "\n 4.Checkout";
	cout << "\n 5.Logout";
	cout << "\n\n Choose option: ";
	cin >> input;

	if (input == 1)
	{
		scanItem();
		goto option;
	}
	else if (input == 2)
	{
		topUp();
		goto option;
	}
	else if (input == 3)
	{
		billPayment();
		goto option;
	}
	else if (input == 4)
	{
		checkout();
		goto option;
	}
	else if (input == 5)
	{

	}
}



/////////
//Login//
/////////
void login()
{
login:
	system("cls");
	cout << " Cashier 1.0";
	cout << "\n page: Login";
	if (error == true)
	{
		cout << "\n ID or Password is not registered!";
	}
	cout << "\n\n\n ID       : ";
	cin >> input;
	if (input != userID)
	{
		error = true;
		goto login;
	}
	cout << " Password : ";
	cin >> input;
	if (input != password)
	{
		error = true;
		goto login;
	}
}



/////////////
//Scan Item//
/////////////
void scanItem()
{

}



//////////
//Top Up//
//////////
void topUp()
{

}



////////////////
//Bill Payment//
////////////////
void billPayment()
{

}



////////////
//Checkout//
////////////
void checkout()
{

}