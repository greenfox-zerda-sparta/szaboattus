using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlgorithmWorkshop
{

  class QuickUnion
  {
    private int[] id;

    public QuickUnion(int arrayLength) 
      {
        id = new int[arrayLength];
        for (int i = 0; i < arrayLength; i++)
        {
          id[i] = i;
        } 
      }
    private int root(int i)
    {
      while (i != id[i])
      {
        i = id[i];
      }
      return i;
    }

    public bool find(int p, int q)
    {
      return root(p) == root(q);
    }

    public void unite(int p, int q)
    {
      int i = root(p);
      int j = root(q);
      id[i] = j;
    }
  }

  class Program
  {
    private static bool binarySearchEasy(List<int> array, int x) {
      return (array.BinarySearch(x) != -1);
    }

    private static bool binarySearchScipt(List<int> array, int target) { 
      bool found = false;
      int mid = 0;
      int first = 0;
      int last = array.Count()- 1;
      do
      {
        mid = (first + last) / 2;
        if (target > array[mid])
        {
          first = mid + 1;
        }
        else
        {
          last = mid - 1;
        }
        if (array[mid] == target)
        {
          found = true;
        }
      } while (first <= last);
      return found;
    }

    static void Main (string[] args)
    {
      List<int> sortedVector = new List<int>();
      sortedVector.Add(1);
      sortedVector.Add(4);
      sortedVector.Add(3);
      sortedVector.Add(8);
      sortedVector.Add(5);

      sortedVector.Sort();
      foreach (int item in sortedVector)
      {
        Console.WriteLine("Sorted vector:"+item);
      }

      //int index = sortedVector.BinarySearch(0);
      //Console.WriteLine("The item's index: " + index);
      //Console.WriteLine(binarySearchEasy(sortedVector,8));
      Console.WriteLine(binarySearchScipt(sortedVector, 123));
    }
  }
}
