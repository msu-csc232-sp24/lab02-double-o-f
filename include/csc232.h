/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright Copyright (c) 2021 James R. Daehn
 */

#ifndef CSC232_COMMON_H_
#define CSC232_COMMON_H_

#define FALSE 0
#define TRUE 1
#define EXECUTE_BLOCK FALSE

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE 

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{
        // Add any user-defined functions prescribed in your assignment below
        // TODO: 1.1 Declare the Shape interface below
        class Shape
        {
                public:
                        virtual double area() const = 0;
                        virtual double perimeter() const = 0; 
                        virtual ~Shape() = default;
        };

        // TODO: 2.1 Provide an inline definition of the Square class below
        /**
         * @brief class representing a square
         */
        class Square : public Shape
        {
                public:
                        /**
                         * @brief finds the area of a Square object
                         *
                         * @return area of Square
                         */
                        double area() const override
                        {
                                return side * side;
                        }

                        /**
                         * @brief finds the perimeter of a Square object
                         *
                         * @return perimeter of Square
                         */
                        double perimeter() const override
                        {
                                return side * 4;
                        } 

                        ~Square() = default;

                private:
                        /**
                         * @brief side length of Square object
                         */
                        double side = 1;
        };

        // TODO: 3.1 Provide an inline definition of the Circle class below
        /**
         * @brief class representing a circle
         */
        class Circle : public Shape
        {
                public:
                        /**
                         * @brief radius Circle object
                         */
                        double rad = 1;

                        /**
                         * @brief finds the area of a Circle object
                         *
                         * @return area of Circle
                         */
                        double area() const override
                        {
                                return M_PI * (rad * rad);
                        }

                        /**
                         * @brief finds the perimeter of a Circle object
                         *
                         * @return perimeter of Circle
                         */
                        double perimeter() const override
                        {
                                return 2 * M_PI * rad;
                        } 

                        ~Circle() = default;
        };

        // DO NOT Modify anything below this line
} // namespace csc232

#endif // CSC232_COMMON_H_
