#include <iostream>
#include <cstdlib> // does the system stuff
#include <thread>
#include <chrono>
#include <direct.h>
#include <filesystem>

int main()
{

    _chdir("C:\\");
    using namespace std::chrono_literals;
    std::cout << "Hello, from ChineseVirus!\n";
    std::this_thread::sleep_for(5s);
    std::cout << "All your computer is mine.";
    std::this_thread::sleep_for(3s);
    std::system("dir /s");

}
