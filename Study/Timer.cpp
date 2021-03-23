#include <iostream>
#include <memory>
#include <chrono>
#include <thread>

struct Timer
{
    // std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::high_resolution_clock::time_point start, end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "Time took " << ms << " ms" << std::endl;
    }
};

void Function()
{
    Timer timer;

    for (int i = 0; i < 100; i++)
        std::cout << "Hello" << std::endl;
}

int main()
{
    // Function();

    int value = 0;
    {
        Timer timer;
        for (int i = 0; i < 1000000; i++) 
            value += 2;
    
    }
    
    std::cout << value << std::endl;

    // __debugbreak();
    std::cin.get();
}