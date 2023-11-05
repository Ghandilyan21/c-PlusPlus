#include <iostream>
#include <string>
int word_length(std::string& str)
{
    int count{};
    int index{};
    for (int i = str.size() - 1; i > 0; --i)
    {
        if (str[i] != ' ')
        {
            index = i;
            break;
        }
        
    }
    
    for (int i = index; i > 0; --i)
    {
        if (str[i] != ' ')
        {
            ++count;
            continue;
        }
        break;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    std::string str = "Hello world kjashakd   ";
    std::cout << word_length(str);
    return 0;
}
