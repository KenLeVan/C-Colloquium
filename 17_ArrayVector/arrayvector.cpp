/*



*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::array<int, 5> arr = {3, 2, 4, 1, 5};
    std::vector<int> vec = {3, 4, 1, 2, 5};
    
    std::sort(std::begin(arr), std::end(arr));
    std::sort(std::begin(vec), std::end(vec));

    std::cout << "array size" << arr.size() << std::endl;
    std::cout << "vec size" << vec.size() << std::endl;

    return 0;
}