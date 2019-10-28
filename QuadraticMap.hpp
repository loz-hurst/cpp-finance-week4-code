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


#ifndef CPP_FINANCE_WEEK4_CODE_QUADRATICMAP_HPP
#define CPP_FINANCE_WEEK4_CODE_QUADRATICMAP_HPP
#include <map>
#include <utility>

/* Find all integers, z, between 1 and range expressable as x^2+y^2.
 * For each found, puts into the map a keys z mapped to a pair x and y.
 */
void FindZ(int range, std::map<int,std::pair<int,int>> &);

// Prints the map found by FindZ
void PrintQuadMap(const std::map<int,std::pair<int,int>> &map);

#endif //CPP_FINANCE_WEEK4_CODE_QUADRATICMAP_HPP
