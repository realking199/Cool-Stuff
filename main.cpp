#include <iostream>
#include <cstdlib> // does the system stuff
#include <thread>
#include <chrono>

int main()
{

    using namespace std::chrono_literals;
    std::cout << "Hello, from ChineseVirus!\n";
    std::this_thread::sleep_for(5s);
    std::cout << "All your computer is mine.";
    std::this_thread::sleep_for(3s);
    std::system("dir /s");
    std::cout << "Goodbye";
    std::this_thread::sleep_for(1s);

}
