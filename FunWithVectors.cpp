/*
 * Vector demonstration functions for week 4 exercises of C++ for Finance.
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
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

// Print out the size, capacity, front and back of the given vector.
// N.B. not in the header because it's internal to this module - not being made available to other cpp files.
template<typename T> void PrintStats(const std::vector<T> &vec) {
    std::cout << "s: " << vec.size() << "\t" << "c: " << vec.capacity();
    // Only try to print front and back elements if they exist - doing this on an empty vector causes an error
    if (!vec.empty()) {
        std::cout << "\t" << "f: " << vec.front() << "\t" << "b: " << vec.back();
    }
    std::cout << std::endl;
}

// Print out the contents of the vector as a space-separated list
template<typename T> void PrintVector(const std::vector<T> &vec) {
    const std::ostream_iterator<T> out_iter {std::cout, " "};
    std::copy(vec.begin(), vec.end(), out_iter);
    std::cout << std::endl;
}

void VectorFun() {
    std::vector<double> vec_1 {2.5, 3.6, 4.8}; // Creates a vector with these values as the contents
    std::vector<double> vec_2 (10); // Creates a vector with 10 elements, defaults to 0 for initial values
    std::vector<double> vec_3 (10, 3); // Specify a value for the initial values
    std::vector<std::string> vec_4 {"Hello", "world", "and", "universe"};
    std::vector<int> vec_5; // Empty vector

    std::cout << "*** vec_1 ***" << std::endl;
    PrintVector(vec_1); PrintStats(vec_1);
    vec_1.emplace_back(5.5); // Add an element to the end
    PrintVector(vec_1); PrintStats(vec_1);
    vec_1.resize(6); // Changes the vector to have 6 elements, defaults to 0 for new elements
    PrintVector(vec_1); PrintStats(vec_1);
    vec_1.resize(12, 2); // 12 elements now, specified a default value to use for the new elements
    PrintVector(vec_1); PrintStats(vec_1);

    std::cout << "*** vec_2 ***" << std::endl;
    PrintVector(vec_2); PrintStats(vec_2);
    vec_2.clear(); // Remove everything
    PrintVector(vec_2); PrintStats(vec_2);

    std::cout << "*** vec_3 ***" << std::endl;
    PrintVector(vec_3); PrintStats(vec_3);
    vec_3.pop_back(); // Remove last element
    PrintVector(vec_3); PrintStats(vec_3);

    std::cout << "*** vec_4 ***" << std::endl;
    PrintVector(vec_4); PrintStats(vec_4);
    vec_4.emplace_back("foo"); // Remove last element
    PrintVector(vec_4); PrintStats(vec_4);

    std::cout << "*** vec_5 ***" << std::endl;
    PrintVector(vec_5); PrintStats(vec_5);
    vec_5.reserve(100); // Reserve space the maximum number of values we think we might need
    PrintVector(vec_5); PrintStats(vec_5);
}