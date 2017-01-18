using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoTry {
  class Program {
    static void Main(string[] args) {
      ArgHandler arghandler = new ArgHandler(args);
      arghandler.RunbyArg();
      }
    }
  }