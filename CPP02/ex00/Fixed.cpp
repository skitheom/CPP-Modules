/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:39:52 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/30 10:50:16 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// A default constructor that initializes the fixed-point number value to 0
Fixed::Fixed() : fixedPointNumber(0) {
  std::cout << "Default constructor called" << std::endl;
}

// A copy constructor
Fixed::Fixed(const Fixed &other) : fixedPointNumber(other.fixedPointNumber) {
  std::cout << "Copy constructor called" << std::endl;
}

// A copy assignment operator overload
Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &other) { // Self-assignment check
    this->fixedPointNumber = other.fixedPointNumber;
  }
  return *this;
}

// Destructor
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

// Get the raw value of the fixed-point value
int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->fixedPointNumber;
}

// Set the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->fixedPointNumber = raw;
}
