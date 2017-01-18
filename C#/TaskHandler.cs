using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoTry {
  class TaskHandler {
    private const string NOT_CHECKED_PREFIX = "{0}. [ ] {1}";
    private const string CHECKED_PREFIX = "{0}. [X] {1}";

    private bool IsChecked(string task)
    {
      return task.First() == '1';
    }

    public void AddTask(ref List<string> todolist, string task)
    {
      task = 0 + task;
      todolist.Add(task);
    }

    public void DeleteTask(ref List<string> todolist, string number)
    {
      todolist.RemoveAt(Int32.Parse(number) - 1);
    }

    public void CheckTask(ref List<string> todolist, string number)
    {
      int counter = Int32.Parse(number) -1 ;
      todolist[counter] = "1" + todolist[counter].Substring(1);
    }

    public void ListTheListToConsole(ref List<string> todolist)
    {
      string temp;
      for (int i = 0; i < todolist.Count; i++)
      {
        if (IsChecked(todolist[i]))
        {
          temp = CHECKED_PREFIX;
        }
        else
        {
          temp = NOT_CHECKED_PREFIX;
        }
        Console.WriteLine(temp, i + 1, todolist[i].Substring(1));
      }
    }
  }
}
