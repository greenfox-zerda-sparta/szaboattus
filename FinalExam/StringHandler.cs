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
      char[] charArray = text.ToCharArray();
      string reverse = "";
      for (int i = charArray.Length - 1; i > -1; i--)
      {
        reverse += charArray[i];
      }
      return reverse;
    }
  }
}
