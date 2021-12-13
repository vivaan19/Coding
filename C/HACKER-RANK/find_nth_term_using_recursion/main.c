#include <stdio.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
  //Write your code here.

  if(n != 1)
  {
      int res = a+b+c;
      return find_nth_term(n-2, b, c, res);
  }


}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
