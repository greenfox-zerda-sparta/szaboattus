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
      string str = "Greenfox";
      strhandler.Reverse(str);
    }
  }
}
