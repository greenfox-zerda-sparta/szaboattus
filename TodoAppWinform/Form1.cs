using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinfromTry {
  public partial class Form1 : Form {
    ErrorHandler errorhandler;
    FileHandler filehandler;
    TaskHandler taskhandler;
    public Form1()
    {
      InitializeComponent();
      errorhandler = new ErrorHandler();
      filehandler = new FileHandler();
      taskhandler = new TaskHandler();
      AddToCheckBoxList();
    }

    private void AddToCheckBoxList() {
      for (int i = 0; i < filehandler.TodoList.Count(); i++) {
        string temp = filehandler.TodoList[i].Substring(1);
        checkedListBox1.Items.Add(temp);
        if (filehandler.TodoList[i].First() == '1')
        {
          checkedListBox1.SetItemCheckState(i, CheckState.Checked);
        }
        else {
          checkedListBox1.SetItemCheckState(i, CheckState.Unchecked);
        }
      }
  }

    private void Form1_Load(object sender, EventArgs e)
    {

    }

    private void button1_Click(object sender, EventArgs e)
    {
      this.Close();
    }

    private void numericUpDown2_ValueChanged(object sender, EventArgs e)
    {

    }

    private void numericUpDown1_ValueChanged(object sender, EventArgs e)
    {

    }

    private void textBox1_TextChanged(object sender, EventArgs e)
    {
    }

    private void textBox2_TextChanged(object sender, EventArgs e)
    {
    }

    private void button1_Click_1(object sender, EventArgs e)
    {
    }

    private void bt_add_Click(object sender, EventArgs e)
    {
      taskhandler.AddToList(textbox_add.Text);
      filehandler.TodoList.Clear();
      filehandler.ReadFromFile();
      checkedListBox1.Items.Clear();
      AddToCheckBoxList();
    }

    private void bt_remove_Click(object sender, EventArgs e)
    {
      foreach (int indexChecked in checkedListBox1.CheckedIndices)
      {
        MessageBox.Show(indexChecked.ToString());
        taskhandler.RemoveFromList(indexChecked.ToString());
        filehandler.TodoList.Clear();
        filehandler.ReadFromFile();
        checkedListBox1.Items.Clear();
        AddToCheckBoxList();
      }
    }

    private void bt_check_Click(object sender, EventArgs e)
    {
      foreach (int indexChecked in checkedListBox1.CheckedIndices)
       {
         // The indexChecked variable contains the index of the item.
         taskhandler.CheckItOnList(indexChecked);
         //MessageBox.Show("Index#: " + indexChecked.ToString() + ", is checked. Checked state is:" +
         //                checkedListBox1.GetItemCheckState(indexChecked).ToString() + ".");
         filehandler.TodoList.Clear();
         filehandler.ReadFromFile();
         checkedListBox1.Items.Clear();
         AddToCheckBoxList();
       }
    }

    private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
    {
    }
  }
}
