
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <utility>


class letnum {
private:
	std::string s;
	int nrlet = 0;
	int nrnum = 0;
public:
	letnum(std::string &str)
	{
		s = str;
	
		std::cout << "\nString-ul are dimensiunea de " << s.size() << " caractere." << std::endl;
		NrOfLetters();
		NrOfNumbers();
		std::cout << s << std::endl;

	};

	void NrOfNumbers()
	{

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				nrnum++;
		}

		std::cout << "Numarul de cifre din string este:" << nrnum << std::endl;
	};
	
	void NrOfLetters()
	{


		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				nrlet++;
		}

		std::cout << "Numarul de litere din string este:" << nrlet << std::endl;
	};

	/*letnum& operator=(const letnum& other) {
		this->s = other.s;
		this->nrnum = other.nrnum;
		this->nrlet = other.nrlet;
		return *this;
	}; */

	letnum& operator=(letnum&& other) {
		this->s = other.s;
		this->nrnum = other.nrnum;
		this->nrlet = other.nrlet;
		return *this;
	};

	void afisare() {
		std::cout << s << std::endl;
	};
};

int main()
{

	std::string s;
	std::string c;

	std::cout << "Introduceti string C :" << std::endl;
	std::cin >> c;
	
	std::cout << "\nIntroduceti string S :" << std::endl;
	std::cin >> s;

	letnum str1(c);
	letnum str2(s);

	str2=std::move(str1);
	std::cout << "\n\n";

	str1.afisare();
	str2.afisare();
	
	

	


	_getch();

	return 0;
}
