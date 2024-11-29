/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:47:01 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/29 16:02:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
  static const int NUM_OF_FUNCS = 4;
  static const std::string levels[NUM_OF_FUNCS];
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void complain_loop(int level_no);

public:
  void complain(std::string level);
  void filter(std::string level);
};

#endif
