#include <iostream>
#include <limits.h>

using std::string;

void print(std::string message, bool new_line = false)
{
  if (new_line)
  {
    std::cout << message << std::endl;
  }
  else
  {
    std::cout << message;
  }
}

void data_types()
{
  char h = 'A';
  print("char max:" + std::to_string(CHAR_MAX));
  print("char min:" + std::to_string(CHAR_MIN));
  print("char size:" + std::to_string(sizeof(h)));
  bool i = true;
  print("bool max:" + std::to_string(CHAR_MAX));
  print("bool min:" + std::to_string(CHAR_MIN));
  print("bool size:" + std::to_string(sizeof(i)));
  short a = 1;
  unsigned short ua = 2;
  print("short max:" + std::to_string(SHRT_MAX));
  print("short min:" + std::to_string(SHRT_MIN));
  print("unsigned short max:" + std::to_string(USHRT_MAX));
  print("short size:" + std::to_string(sizeof(a)));
  int b = 2;
  unsigned int ub = 3;
  print("int max:" + std::to_string(INT_MAX));
  print("int min:" + std::to_string(INT_MIN));
  print("unsigned int max:" + std::to_string(UINT_MAX));
  print("int size:" + std::to_string(sizeof(b)));
  long c = 3;
  unsigned long uc = 30;
  print("long max:" + std::to_string(LONG_MAX));
  print("long min:" + std::to_string(LONG_MIN));
  print("unsigned long max:" + std::to_string(ULONG_MAX));
  print("long size:" + std::to_string(sizeof(c)));
  long long d = 4;
  unsigned long long ud = 40;
  print("long long max:" + std::to_string(LLONG_MAX));
  print("long long min:" + std::to_string(LLONG_MIN));
  print("unsigned long long max:" + std::to_string(ULLONG_MAX));
  print("long long size:" + std::to_string(sizeof(d)));
  float e = 5.0f;
  print("float max:" + std::to_string(__FLT_MAX__));
  print("float size:" + std::to_string(sizeof(e)));
  double f = 6.0;
  long double uf = 7.0;
  print("double max:" + std::to_string(__DBL_MAX__));
  print("long double max:" + std::to_string(__LDBL_MAX__));
  print("double size:" + std::to_string(sizeof(f)));
}

void calculator()
{
  float a = 0, b = 0;
  char op;
  std::string op_str;

  print("Enter first number: ");
  std::cin >> op_str;
  try
  {
    a = std::stof(op_str);
  }
  catch (const std::invalid_argument &e)
  {
    print("Invalid input for first number. Please enter a valid number.", true);
    return calculator();
  }
  print("Enter second number: ");
  std::cin >> op_str;
  try
  {
    b = std::stof(op_str);
  }
  catch (const std::invalid_argument &e)
  {
    print("Invalid input for second number. Please enter a valid number.", true);
    return calculator();
  }
  print("Enter operator (+, -, *, /): ");
  std::cin >> op;

  if (op != '+' && op != '-' && op != '*' && op != '/')
  {
    print("Invalid operator please try again.", true);
    return calculator();
  }

  switch (op)
  {
  case '+':
    print("sum:" + std::to_string(a + b), true);
    break;

  case '-':
    print("sub:" + std::to_string(a - b), true);
    break;

  case '*':
    print("mul:" + std::to_string(a * b), true);
    break;

  case '/':
    print("div:" + std::to_string(a / b), true);
    break;

  default:
    break;
  }
}

int main()
{
  // data_types();
  calculator();
  return 0;
}