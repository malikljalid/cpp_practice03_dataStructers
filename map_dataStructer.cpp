#include <iostream>
#include <map>

int main(void)
{
    std::map <std::string, int> mpNames;

    mpNames["Zakaria"] = 1337;
    mpNames["Joshwa"]  = 42;
    mpNames["Stone"]   = 1;

    if (mpNames.find("Joshwa") != mpNames.end())
        std::cout << mpNames.find("Joshwa")->second << std::endl;

    for (std::map <std::string, int>::iterator it = mpNames.begin(); it != mpNames.end(); it++)
    {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    for (const auto &pair : mpNames)
    {
        std::cout<< pair.first << " : " << pair.second << std::endl;
    }

    if (mpNames.find("Hacker") == mpNames.end())
        std::cout << "Hacker does not EXIST !!\n";

    return (0);
}
