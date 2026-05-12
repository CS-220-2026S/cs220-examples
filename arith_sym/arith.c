extern int b;
int add(int x, int y) {
  static int res;
  res += b + x + y;
  return res;
}
int sub(int x, int y) {
  static int res = 1;
  res += b + x - y;
  return res;
}
