/*Вам дана переменная типа `unsigned short`. Необходимо найти максимальный байт в её представлении.

Разберем на конкретном примере: 

Пусть вход - число `115`. Биттовое представление этого числа - `01110011`. Первый байт (`0111`) -
 это представление числа `7`, второй байт (`0011`) - представление числа `3`.
  Ваша задача - вернуть максимальный байт, поэтому возвращаем число `7` в виде `unsigned char`.
*/


unsigned char max_byte(unsigned short number) {
    unsigned char result = 0;
    unsigned short mask = 1;

    for (int i = 0; i < 8; i++) {
      if ((number & mask) > result) {
          result = number & mask;
      }
      mask <<= 1;
  }

  return result;
    
}
