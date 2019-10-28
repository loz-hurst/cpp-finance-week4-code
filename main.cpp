/*
 * Code for week 4 exercises of C++ for Finance.
 *
 * Copyright 2019 Laurence Alexander Hurst
 *
 * This file is part of C++ for Finance.
 *
 *     C++ for Finance is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     C++ for Finance is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *
 * See the file LICENCE in the original source code repository for the
 * full licence.
 */

#include "FunWithVectors.hpp"
#include "QuadraticMap.hpp"
#include "SquareNumberVectors.hpp"
#include "Sort.hpp"
#include "VectorMath.hpp"
#include <iostream>
#include <map>
#include <random>
#include <utility>
#include <vector>

int main() {

    // Exercise 1
    VectorFun();
    std::vector<int> ex_1_vec {1, 2, 3, 4, 5, 6};
    CumulativeSum(ex_1_vec);
    FibonacciFill(ex_1_vec);
    std::cout << "Fibonacci sequence: ";
    for(auto &item : ex_1_vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    // Exercise 2
    std::vector<int> ex2_vec {3, 5, 12, 18, 25, 100, 65, 81};
    std::cout << "There are " << CountSquares(ex2_vec) << " square numbers in the vector." << std::endl;
    std::cout << "The first square number is at " << WhereSquare(ex2_vec) << std::endl;

    // Exercise 3
    // Fill a list with 100 random ints
    std::vector<int> ex3_vec (100);
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(1,100000);
    std::generate(std::begin(ex3_vec), std::end(ex3_vec), [&] () {return distribution(generator);});

    Sort(ex3_vec);
    // *vv* put your std::sort version below this line *vv*

    // *^^* put your std::sort version above this line *^^*

    // Exercise 4
    std::map<int,std::pair<int,int>> ex4_z;
    FindZ(100, ex4_z);
    PrintQuadMap(ex4_z);

    return 0;
}