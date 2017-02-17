using Microsoft.VisualStudio.TestTools.UnitTesting;
using FinalExam;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FinalExam.Tests
{
  [TestClass()]
  public class StringHandlerTests
  {
    [TestMethod()]
    public void StringReverseTest()
    {
      StringHandler strhandler = new StringHandler();
      string str = "Greenfox";
      string strFinal = "xofneerG";
      Assert.AreEqual(strFinal, strhandler.Reverse(str));
    }
  }
}