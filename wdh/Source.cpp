#include <iostream>
#include <string>

int main()
{
	std::string namen[]{ "Peter","Betty","Carline","Dave","Emily","Fred","Greg","Holly" };

	std::cout << " Enter a name : ";
	std::string eingabe;
	std::cin >> eingabe;

	bool auswertung = false;
	for (auto &name : namen)
	{
		if (name == eingabe)
		{
			auswertung = true;
			break;
		}
		else
		{
			auswertung = false;
		}
	}
	if (auswertung == true)
	{
		std::cout << "Name gefunden!\n";
	}
	else
	{
		std::cout << "Name nicht gefunden!\n";
	}
	return 0;
}




/*
1) Declare a fixed array with the following names : Alex, Betty, Caroline, Dave, Emily, Fred, Greg, and Holly.
Ask the user to enter a name.Use a for each loop to see if the name the user entered is in the array.*/