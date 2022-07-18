#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int j;
    int i;
    char *str;

    j = 1;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
        return (0);
    }
    while (j < ac)
    {
        i = 0;
        str = av[j];
        while (str[i])
        {
            str[i] = toupper(str[i]);
            i++;
        }
        j++;
        std::cout << str << ' ';
    }
    std::cout << "\n";
    
}