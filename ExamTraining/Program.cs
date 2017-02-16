using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamTraining
{
  public class Program
  {
    public static Calculator calc;
    public static  StringOperations strOp;
    public static void Main(string[] args)
    {
      calc = new Calculator();
      strOp = new StringOperations();
    }
  }
}
