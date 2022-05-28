//
// Created by changjun on 22. 5. 24.
//

#include "module1/ClassMat.hpp"
#include "module2/ClassEigenMat.hpp"

#include <iostream>

int main()
{
    const auto mat_module1 = ClassMat();
    const auto mat_module2 = ClassEigenMat();
    std::cout << "Success!" << std::endl;

    return 0;
}