#include <iostream>
#include <string>
bool polindrom_rec(std::string str)
{
    if (str.size() <= 1)
    {
        return true;
    }
    
    if (str[0] == str[str.size() - 1])
    {
        str.erase(str.size() - 1,1);
        str.erase(0, 1);
        return polindrom_rec(str);
    }
    else
    {
        return false;
    }
    //return polindrom_rec(str);
    
}
int main()
{
   std::string str = "artka";
   std::cout << polindrom_rec(str);
//    std::cout << str.size();
//    str.erase(0, 1);
//    std::cout << str[str.size() - 1];



}
