using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// 2. Create a function that reverses a string
// Greenfoxacademy/Zerda/Sparta/SzaboAttila

namespace FinalExam
{
  public class Program
  {
    static void Main(string[] args)
    {
      StringHandler strhandler = new StringHandler();
      InputOutput inputoupthandler = new InputOutput();
      inputoupthandler.inputString();
      Console.WriteLine(strhandler.Reverse(inputoupthandler.inputStr));
    }
  }
}
