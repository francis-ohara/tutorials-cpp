//
// Created by franc on 8/21/2022.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>



struct Student{
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};


int main() {
    Student st;
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
