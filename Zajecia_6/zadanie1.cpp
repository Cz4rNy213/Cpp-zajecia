#include <iostream>
#include "vector2d.h"
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
 
std::vector<int> generateIntData()
{
    std::vector<int> result;
    result.reserve(72u);
    for(std::size_t i = 0u; i < 6u; ++i)
    {
        for(std::size_t j = 4u; j < 10u; ++j)
        {
            for(std::size_t k = 1u; k < 3u; ++k) { result.push_back((i * j + k) / 2u); }
        }
    }
 
    return result;
}
 
std::vector<Vector2D> generateVector2DData()
{
    std::vector<Vector2D> result;
    result.reserve(64u);
    for(std::size_t i = 0u; i < 8u; ++i)
    {
        for(std::size_t j = 2u; j < 10u; ++j) { result.push_back(Vector2D(i * 2.f + j, j * 2.f + i)); }
    }
 
    return result;
}
 
template<typename T>
void printVector(const std::vector<T>& v)
{
    for(const auto& e : v) { cout << e << ", "; }
    cout << endl;
}
 
void filterData(std::vector<int>& data)
{
    auto it = std::remove_if(data.begin(), data.end(), [](const int &a){ return a%2 != 0; });
    data.erase(it, data.end());
    std::sort(data.begin(), data.end(),[](const int& a, const int& b){ return a >b; });
    auto last = std::unique(data.begin(), data.end());
    data.erase(last, data.end());
}
 
// void filterData(std::vector<Vector2D>& data)
// {
//     auto it = std::remove_if(data.begin(), data.end(), [](const int &a){ return a%2 != 0; });
//     data.erase(it, data.end());
//     std::sort(data.begin(), data.end(),[](const int& a, const int& b){ return a >b; });
//     auto last = std::unique(data.begin(), data.end());
//     data.erase(last, data.end());
// }
 
int main()
{
    std::cout << "\n#### Test 1 ####" << std::endl;
    {
        auto data = generateIntData();
        std::cout << "Before filter\n" << data.size() << " data elements" << std::endl;
        filterData(data);
        std::cout << "\nAfter filter\n" << data.size() << " data elements" << std::endl;
        printVector(data);
    }
    std::cout << "\n#### Test 2 ####" << std::endl;
    {
        auto data = generateVector2DData();
        std::cout << "Before filter\n" << data.size() << " data elements" << std::endl;
        // filterData(data);
        std::cout << "\nAfter filter\n" << data.size() << " data elements" << std::endl;
        printVector(data);
    }
 
    return 0;
}