/* Bla bla bla */

template <typename T>
void foo(T x)
{
  auto y = x > 5;

  if (y)
  {
    printf("%s\n", "x is greater than 5");
  }
}


void main()
{
  foo(7);
}
