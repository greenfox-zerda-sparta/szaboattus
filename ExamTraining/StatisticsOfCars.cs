using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamTraining
{
  class StatisticsOfCars
  {
    List<Car> carGarage = new List<Car>();
    public void statistics()
    {
      carGarage.Add(new Car() { color = "red", type = "ferrari" });
      carGarage.Add(new Car() { color = "blue", type = "ferrari" });
      carGarage.Add(new Car() { color = "black", type = "ferrari" });
      carGarage.Add(new Car() { color = "red", type = "ferrari" });

      List<string> colors = new List<string>();

      foreach (Car item in carGarage)
      {
        if (!colors.Contains(item.color))
        {
          colors.Add(item.color);
        }
      }
      foreach (Car item in carGarage)
      {
        Console.WriteLine("color: " + item.color + "; type: " + item.type);
      }
      Console.WriteLine("Sum of colors: " + colors.Count);
    }
  }
}
