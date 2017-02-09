using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinfromTry {
  class ErrorHandler {
    public string data = "looool";
    public void WriteError(int errorcode)
    {
      switch (errorcode)
      {
        case 10:
          Form1 form1 = new WinfromTry.Form1();
          Console.WriteLine("Wrong arguments!");
          break;
        case 11:
          Console.WriteLine("Wrong argument: After -r must be a greater number than zero");
          break;
      }
    }
  }
}

