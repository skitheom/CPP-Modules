/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:17:24 by sakitaha          #+#    #+#             */
/*   Updated: 2024/11/30 10:50:19 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
  int fixedPointNumber;
  static const int numOfFractionalBits = 8;

public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();

  int getRawBits() const;
  void setRawBits(int const raw);
};

#endif

/*
課題 00: My First Class in Orthodox Canonical Form

        •	必要なファイル: Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp
        •	要件:
        •	Fixed クラスを作成し、以下のメンバーを実装：
        •	プライベート属性:
        •	固定小数点数の値を格納する整数型変数。
        •	フラクショナルビットの数を表す静的定数整数（値は 8）。
        •	パブリックメンバー関数:
        •	デフォルトコンストラクタ: 値を 0 に初期化。
        •	コピーコンストラクタ。
        •	コピー代入演算子オーバーロード。
        •	デストラクタ。
        •	getRawBits() 関数: 固定小数点数の生値を返す。
        •	setRawBits(int const raw) 関数: 生値を設定する。
        •
クラスの動作を確認するため、指定されたサンプルコードを動かしてみる。

次に、Fixed クラスをさらに発展させる課題があります

 */
