#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> BoardChars;
	BoardChars.resize(5);

	for (int i = 0; i < 5; i++)
	{
		std::cin >> BoardChars[i];
	}

	std::string Answer = "";

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (BoardChars[j].size() <= i)
			{
				continue;
			}

			Answer += BoardChars[j][i];
		}
	}

	std::cout << Answer;

	return 0;
}