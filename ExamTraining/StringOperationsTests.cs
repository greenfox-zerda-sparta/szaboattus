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
  public class StringOperationsTests
  {
    [TestMethod()]
    public void giveBackCharASciiTest()
    {
      StringOperations strOp = new StringOperations();
      char character = 'a';
      Assert.AreEqual(97, strOp.giveBackCharAScii(character));
    }

    [TestMethod()]
    public void findCharInString()
    {
      StringOperations strOp = new StringOperations();
      char character = 'a';
      string str = "alma";
      Assert.AreEqual(0, strOp.findCharInString(str, character));
    }
  }
}