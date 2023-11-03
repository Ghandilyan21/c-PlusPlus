#include <iostream>
#include <string>
void reverse(std::string& str, int first = 0, int end = 1)
{
    if (first == str.size() / 2)
    {
        return;
    }
    char tmp = str[first];
    str[first] = str[str.size() - 1 - first];
    str[str.size() - 1 - first] = tmp;
    reverse(str, first + 1, str.size() - 2 - first);
}
int main()
{
    std::string str = "abcdef";
    reverse(str);
    std::cout << str;
}
