using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FinalExam
{
  class InputOutput   
  {
    public string inputStr { get; set; }

    public InputOutput()
    {
      inputStr = "";
    }

    public string inputString()
    {
      while (inputStr == "")
      {
        Console.WriteLine("Please give a string! I'll give it back in reverse form");
        inputStr = Console.ReadLine();
      }
      return inputStr;
    }
  }
}
