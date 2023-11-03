#include <iostream>
#include <string>
bool polindrom_rec(std::string& str, int first = 0, int back = 10)
{
    if (first == back)
    {
        return true;
    }
    
    if (str[first] == str[str.size() - 1 - first])
    {
        return polindrom_rec(str, first + 1, str.size() - 2 - first);
    }
    else
    {
        return false;
    }
    //return polindrom_rec(str);
    
}
int main()
{
   std::string str = "artra";
   std::cout << polindrom_rec(str);
//    std::cout << str.size();
//    str.erase(0, 1);
//    std::cout << str[str.size() - 1];



}
