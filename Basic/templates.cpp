#include <iostream>
#include <string>
/*这样可以，但是过于重复了
int add(int x, int y) {return x+y;}
std::string add(std::string x, std::string y) {return x+y;}
int main() {
    std::cout << add(1.2,1.4) << std::endl;
    std::cout << add("hello","world") << std::endl;
    return 0;
}
*/

//使用template
//当你不知道class是什么的时候使用class T
template <class T>
T add(T x, T y) {return x+y;}

//另一种用法是使用template创造未知size的array
template<int size, class Unknown>
class storage {
    private:
        Unknown storage[size];
};
int main() {
    std::cout << add(1.2,1.4) << std::endl;
    std::cout << add(1,2) << std::endl;
    //注意这里必须要specify是因为compiler会在外部compile这个string，所以如果不告诉它这是什么type就会报错
    std::cout << add<std::string> ("hello","world") << std::endl;

    //这样就可以自由的创造动态大小的array了
    storage<5, int> s1;
    storage<100, std::string> s2;
    return 0;
}