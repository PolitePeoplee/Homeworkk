#include <vector>
#include<functional> // замена указателя на ф-ю
std::vector<int> map(std::vector<int> numbers, std::function<int(int)>);
std::vector<int> filter(std::vector<int> numbers, std::function<bool(int)>);