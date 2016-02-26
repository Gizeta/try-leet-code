int addDigits(int num) {
  int result = num, sum;
  while (result > 9) {
    sum = 0;
    while (result > 9) {
      sum += result % 10;
      result /= 10;
    }
    result += sum;
  }
  return result;
}
