#include <iostream>
std::string add_binary(std::string& s1, std::string& s2)
{
    int end_s1 = s1.size() - 1;
    int end_s2 = s2.size() - 1;
    std::string s3;
    int tmp{};
    for (int i = end_s1 < end_s2?end_s1:end_s2; i > 0; --i)
    {
        if (s1[i] == 0 && s2[i] == 0)
        {
            s3[i] = s1[i];
        }
        
    }
    
    
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
