using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamTraining
{
  public class StringOperations
  {
    public int giveBackCharAScii(char character)
    {
      return Convert.ToInt32(character);
    }

    public int findCharInString(string str, char character)
    {
      try
      {
        return str.IndexOf(character);
      }
      catch
      {
        return -1;
      }
    }
  }
}
