using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.
// alábbi bonyolultság: (10^N)^2 * 4N

namespace AlgorithmWorkshop2
{
  class Program
  {
    private static bool isPalindrome(int n)
    {
      string str = n.ToString();
      for (int i = 0; i < str.Length; i++)
      {
        if (str[i] != str[str.Length - 1 - i])
        {
          return false;
        }
      }
      return true;
    }

    static void Main(string[] args)
    {
      try
      {
        for (int a = 999; a >= 100; --a)
        {
          for (int b = 999; b >= 100; --b)
          {
            int product = a * b;
            if (isPalindrome(product))
            {
              Console.WriteLine(product + " " + a + " " + b);
              throw new ArgumentNullException();
            }
          }
        }
      }
      catch
      {

      }
    }
  }
}