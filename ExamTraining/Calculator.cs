using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamTraining
{
  public class Calculator
  {
    public int multiplication(int a, int b)
    {
      return a * b;
    }

    public bool isBigger(int[] array, int number)
    {
      bool boolean = false;
      foreach (int item in array)
      {
        boolean = item > number ? true : false;
      }
      return boolean;
    }

    public int addTheArraysItems(int[] array)
    {
      int sum = 0;
      foreach (int item in array)
      {
        sum += item;
      }
      return sum;
    }

    public int divideNumbers(int a, int b)
    {
      try
      {
        return a / b;
      }
      catch (DivideByZeroException)
      {
        Console.WriteLine("divided by zero");
        return -1;
      }
    }
  }
}
