/*
 * Quadratic numbers with maps functions for week 4 exercises of C++ for Finance.
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

#include "QuadraticMap.hpp"
#include <iostream>
#include <map>
#include <utility>

void FindZ(const int range, std::map<int,std::pair<int,int>> &map) {
    // TODO write me
}

void PrintQuadMap(const std::map<int,std::pair<int,int>> &map) {
    for(auto &item : map) {
        std::cout << item.first << " = "; // Key is the quad
        std::cout << item.second.first << "^2 + " << item.second.second << "^2" << "\n";
    }
}