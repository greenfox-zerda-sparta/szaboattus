using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FinalExam
{
  public class StringHandler
  {
    public string Reverse(string text)
    {
      try
      {
        string reverse = "";
        for (int i = text.Length - 1; i >= 0; i--)
        {
          reverse += text[i];
        }
        return reverse;
      }
      catch (Exception e)
      {
        return "An error occurred: " + e;
      }
    }
  }
}