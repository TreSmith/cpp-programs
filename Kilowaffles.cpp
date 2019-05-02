#include <iostream>

using namespace std;

//Utility
void menu();
void printout_waffles(float waffles);
int fim();
int kmc();

//Conversion Equations
int from_imperial();
int from_metric();
void to_imperial();
void to_metric();


int main()
{
	int convert=0, im=0;
	float waffles=1000;

	while (1==1)
	{
		menu();
		cin >> convert;

		if(convert==3)	return 0;	//Menu Item 3 Exit

		cout << "\n1. Imperial\n2. Metric\n\nEnter Value: ";
		cin >> im;

		cout << "\n\n";

		if(convert==1)		//Menu Item 1
		{
			if(im==1)
				waffles = from_imperial();

			if(im==2)
				waffles = from_metric();
			printout_waffles(waffles);
		}

		if(convert==2)		//Menu Item 2
		{
			if(im==1)
				to_imperial();

			if(im==2)
				to_metric();
		}
	cout << "\n\n----------------------------------------------\n";
	}

	return 0;
}

void menu()
{
	cout << "	Super Amazing KiloWaffles Converter" << endl;
	cout << "----------------------------------------------" << endl << endl;
	cout << "1. Convert To Kilowaffles\n" << "2. Convert From Kilowaffles\n" << "3. Exit\n";
	cout << "\nEnter Value: ";
}

void printout_waffles(float waffles)
{
	if(waffles >= 1000)
	{
		waffles = waffles/1000;
		cout << waffles << " KiloWaffles\n\n";
	}	

	else
		cout << waffles << " Waffles\n\n";

}


int fim()
{
	int x;
	cout << "1. Miles\n2. Feet\n3. Inches\n\nEnter Value: ";

	while(1==1)
	{
		cin >> x;
		if(x != 1 && x != 2 && x != 3)
			cout << "Please Enter A Valid Number: ";
		else
			break;
	}
	cout << "\n\nEnter Amount: ";
	return x;
}

int kmc()
{
	int x;
	cout << "1. Kilometers\n2. Meters\n3. Centimeters\n\nEnter Value: ";
	while(1==1)
	{
		cin >> x;
		if(x != 1 && x != 2 && x != 3)
			cout << "Please Enter A Valid Number: ";
		else
			break;
	}
	cout << "\n\nEnter Amount: ";
	return x;
}

int from_imperial()
{
	int x;
	float waffles=0, input=0;	

	x = fim();
	cin >> input;	

	if(x == 1) 		//Miles
		waffles = input * 9051;	
	
	else if(x == 2)	//Feet
		waffles = input * 1.7;

	else			//Inches
		waffles = input / 7;
	
	return waffles;
}

int from_metric()
{
	int x;
	float waffles, input;
	x = kmc();

	cin >> input;

	if(x == 1)
		waffles = input * 5624.3;
	
	else if(x == 2)
		waffles = input * 5.6243;

	else
		waffles = input * .05624;

	return waffles;
}

void to_imperial()
{
	int x;
	float waffles, input;
	x = fim();

	cin >> input;
	input = input * 1000;

	if(x == 1)	 	//To Miles
	{
		waffles = input / 9051;
		cout << waffles << " Miles\n";
	}
	
	else if(x == 2)	//To Feet
	{
		waffles = input / 1.7;
		cout << waffles << " Feet\n";
	}

	else			//To Inches
	{
		waffles = input * 7;
		cout << waffles << " Inches\n";
	}

}

void to_metric()
{
	int x;
	float waffles, input;
	x = kmc();

	cin >> input;
	input = input * 1000;

	if(x == 1)		//Kilometers
	{
		waffles = input / 5624.3;
		cout << waffles << " Kilometers\n";
	}

	else if(x == 2)	//Meters
	{
		waffles = input / 5.62;
		cout << waffles << " Meters\n";
	}

	else			//Centimeters
	{
		waffles = input * 17.78;
		cout << waffles << " Centimeters\n";
	}
}



