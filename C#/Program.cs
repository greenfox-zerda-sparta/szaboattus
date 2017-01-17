using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoTry {
  class FileHandler {
    public List <string> read_list_from_file() {
      string[] stringarray = System.IO.File.ReadAllLines(@"C:\attuswork\szaboattus\C#\todoTry\textfile.txt");
      List<string> todolist = stringarray.ToList();
      return todolist;
    }

    public void save_list_to_file(ref List<string> lines) {
      System.IO.File.WriteAllLines(@"C:\attuswork\szaboattus\C#\todoTry\textfile.txt", lines);
    }
  }

  class TaskHandler {
    private const string not_checked_prefix = "{0}. [ ] {1}";
    private const string checked_prefix = "{0}. [X] {1}";

    private bool is_checked(string task) {
      return task.First() == '1';
    }

    public List<string> add_task(ref List <string> todolist, string task) {
      task = 0 + task;
      todolist.Add(task);
      return todolist;
    }

    public void delete_task(ref List<string> todolist, int number) {
      todolist.RemoveAt(number - 1);  
    }

    public void list_the_list_to_console(List<string> lines) {
      string temp;
      for (int i = 0; i < lines.Count; i++) {
        if (is_checked(lines[i]))
        {
          temp = checked_prefix;
        }
        else {
          temp = not_checked_prefix;
        }
        Console.WriteLine(temp, i + 1, lines[i].Substring(1));
      }
    }
  }

  class Program {
    static void Main(string[] args) {
      FileHandler filehandler = new FileHandler();
      TaskHandler taskhandler = new TaskHandler();
      List <string> todolist = filehandler.read_list_from_file();
      taskhandler.list_the_list_to_console(todolist);
    }
  }
}
