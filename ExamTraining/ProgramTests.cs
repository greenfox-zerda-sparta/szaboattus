using Microsoft.VisualStudio.TestTools.UnitTesting;
using ExamTraining;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamTraining.Tests
{
  [TestClass()]
  public class ProgramTests
  {
    [TestMethod()]
    public void isBiggerTest()
    {
      Calculator calc = new Calculator();
      int [] numberArray = new int[] { 0, 1, 2, 3, 4 };
      int theNumber = 2;

      Assert.AreEqual(true, calc.isBigger(numberArray, theNumber));
    }

    [TestMethod()]
    public void multiplication()
    {
      Calculator calc = new Calculator();
      int a = 2;
      int b = 2;

      Assert.AreEqual(4, calc.multiplication(a, b));
    }

    [TestMethod()]
    public void addTheArraysItems()
    {
      Calculator calc = new Calculator();
      int[] numberArray = new int[] { 0, 1, 2, 3, 4 };

      Assert.AreEqual(10, calc.addTheArraysItems(numberArray));
    }

    [TestMethod()]
    public void divideNumbers()
    {
      Calculator calc = new Calculator();
      int a = 2;
      int b = 2;

      Assert.AreEqual(1, calc.divideNumbers(a, b));
    }
  }
}