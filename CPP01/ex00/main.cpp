/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:06:40 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/23 19:24:18 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

static void printError(const char *errorMsg) {
  std::cerr << errorMsg << std::endl;
}

static void printErrorExit(const char *errorMsg) {
  std::cerr << errorMsg << std::endl;
  exit(EXIT_FAILURE);
}

static std::string getInputStr(const std::string &prompt) {
  std::string userInput;

  while (true) {
    std::cout << prompt;
    if (!std::getline(std::cin, userInput)) {
      if (std::cin.eof())
        printErrorExit("EOF");
      std::cin.clear();
      std::cin.ignore(std::streamsize(-1), '\n');
      std::cout << "Error: Failed to receive input" << std::endl;
      continue;
    }
    return userInput;
  }
}

int main(void) {
  try {
    Zombie *heapZombie = newZombie(getInputStr("Name of your heap zombie: "));
    heapZombie->announce();
    delete heapZombie;
  } catch (const std::bad_alloc &e) {
    printError("Error: Memory allocation failed");
    return EXIT_FAILURE;
  }
  randomChump(getInputStr("Name of your stack zombie: "));
  return EXIT_SUCCESS;
}
