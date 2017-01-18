using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoTry {
  class FileHandler {

    public FileHandler() {
      ReadListFromFile();
    }

    public List<string> todolist;

    public List<string> GetTodolist() {
      return todolist;
    }

    public void SetTodolist(List<string> _todolist)
    {
      this.todolist = _todolist;
    }

    public void ReadListFromFile() {
      string[] stringarray = System.IO.File.ReadAllLines(@"C:\attuswork\szaboattus\C#\todoTry\textfile.txt");
      todolist = stringarray.ToList();
    }

    public void WriteManual()
    {
      string[] stringarray = System.IO.File.ReadAllLines(@"C:\attuswork\szaboattus\C#\todoTry\todoappinfo.txt");
      todolist = stringarray.ToList();
      for (int i = 0; i < todolist.Count; i++) {
      Console.WriteLine(todolist[i]);
      }
    }

    public void SaveListToFile(ref List<string> todolist) {
      System.IO.File.WriteAllLines(@"C:\attuswork\szaboattus\C#\todoTry\textfile.txt", todolist);
    }
  }
}
