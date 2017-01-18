using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoTry {
  class ArgHandler {
    private string[] arguments;
    private string first_arg;
    private string task;

    public ArgHandler(string[] _args)
    {
      this.arguments = _args;
      SetArguments();
    }

    public bool NoArgs() {
      return arguments.Length == 0;
    }

    private void SetArguments() {
      if (!NoArgs()) {
        first_arg = arguments.First();
      }
      if (arguments.Length > 1) {
        task = arguments[1];
      }
    }

    public void RunbyArg() {
      TaskHandler taskhandler = new TaskHandler();
      FileHandler filehandler = new FileHandler();
      if (NoArgs())
      {
        filehandler.WriteManual();
      }
      else
      {
        switch (first_arg)
        {
          case "-l":
            taskhandler.ListTheListToConsole(ref filehandler.todolist);
            break;
          case "-a":
            taskhandler.AddTask(ref filehandler.todolist, task);
            filehandler.SaveListToFile(ref filehandler.todolist);
            break;
          case "-r":
            taskhandler.DeleteTask(ref filehandler.todolist, task);
            filehandler.SaveListToFile(ref filehandler.todolist);
            break;
          case "-c":
            taskhandler.CheckTask(ref filehandler.todolist, task);
            filehandler.SaveListToFile(ref filehandler.todolist);
            break;
          default:
            Console.WriteLine("wrong arguments :(");
            break;
        }
      }
    }
  }
}
