using System;
using System.Collections.Generic;
using System.Linq;

public class Kata
{
  public static int[] CountPositivesSumNegatives(int[] input)
  {
    if (input == null || input.Length == 0)
    {
      int[] emptyArray = new int[0];
      return emptyArray;
    }
    int[] sum = new int[] { 0, 0 };
    foreach (int item in input)
    {
      if (item < 0)
      {
        sum[1] += item;
      }
      if (item > 0)
      {
        ++sum[0];
      }
    }
    return sum;
  }

public static void Main()
  {
    int[] inputs = {};
    CountPositivesSumNegatives(inputs);
  }
}