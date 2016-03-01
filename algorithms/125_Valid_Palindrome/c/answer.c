#include <string.h>

bool isPalindrome(char* s) {
  int first = 0, last = strlen(s) - 1;
  while (last - first > 0) {
    while ((s[first] < 'A' || s[first] > 'Z') && (s[first] < 'a' || s[first] > 'z') && (s[first] < '0' || s[first] > '9') && first < last) first++;
    while ((s[last] < 'A' || s[last] > 'Z') && (s[last] < 'a' || s[last] > 'z') && (s[last] < '0' || s[last] > '9') && first < last) last--;
    if (s[first] < 'a') s[first] += 32;
    if (s[last] < 'a') s[last] += 32;
    if (s[first++] != s[last--]) return false;
  }
  return true;
}
