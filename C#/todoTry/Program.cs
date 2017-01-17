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

    public void write_list_to_file(List<string> lines) {
      System.IO.File.WriteAllLines(@"C:\attuswork\szaboattus\C#\todoTry\output.txt", lines);
    }

    public void write_list_to_console(List<string> lines) {
      for (int i = 0; i < lines.Count; i++) {
        Console.WriteLine(lines[i]);
      }
    }
  }

  class TaskHandler {
    public List<string> add_task(List <string> todolist, string task) {
      string prefix = ". [ ] ";
      int counter = todolist.Count + 1;
      string temp;
      temp = counter + prefix + task;
      todolist.Add(temp);
      return todolist;
    }
  }

  class Program {
    static void Main(string[] args) {
      FileHandler filehandler = new FileHandler();
      TaskHandler taskhandler = new TaskHandler();
      List <string> todolist = filehandler.read_list_from_file();
      filehandler.write_list_to_console(todolist);
      filehandler.write_list_to_file(todolist);

      List<string> newlist;
      newlist = taskhandler.add_task(todolist, "tej");
      Console.WriteLine(newlist.Last());
      }
    }
  }
