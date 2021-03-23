#include <iostream>
#include <string>

template<typename T>
void Print(T value){
    std::cout << value << std::endl;
}

int main()
{
    Print(4);
    Print("String");
    Print (4.4f);
    return 0;
}
