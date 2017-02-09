namespace WinfromTry {
  partial class Form1 {
    /// <summary>
    /// Required designer variable.
    /// </summary>
    private System.ComponentModel.IContainer components = null;

    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
    protected override void Dispose(bool disposing)
    {
      if (disposing && (components != null))
      {
        components.Dispose();
      }
      base.Dispose(disposing);
    }

    #region Windows Form Designer generated code

    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    private void InitializeComponent()
    {
      this.bt_exit = new System.Windows.Forms.Button();
      this.bt_add = new System.Windows.Forms.Button();
      this.bt_remove = new System.Windows.Forms.Button();
      this.bt_check = new System.Windows.Forms.Button();
      this.textbox_add = new System.Windows.Forms.TextBox();
      this.checkedListBox1 = new System.Windows.Forms.CheckedListBox();
      this.SuspendLayout();
      // 
      // bt_exit
      // 
      this.bt_exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
      this.bt_exit.Location = new System.Drawing.Point(36, 434);
      this.bt_exit.Name = "bt_exit";
      this.bt_exit.Size = new System.Drawing.Size(241, 59);
      this.bt_exit.TabIndex = 1;
      this.bt_exit.Text = "Exit";
      this.bt_exit.UseVisualStyleBackColor = true;
      this.bt_exit.Click += new System.EventHandler(this.button1_Click);
      // 
      // bt_add
      // 
      this.bt_add.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
      this.bt_add.Location = new System.Drawing.Point(40, 91);
      this.bt_add.Name = "bt_add";
      this.bt_add.Size = new System.Drawing.Size(195, 52);
      this.bt_add.TabIndex = 2;
      this.bt_add.Text = "Add";
      this.bt_add.UseVisualStyleBackColor = true;
      this.bt_add.Click += new System.EventHandler(this.bt_add_Click);
      // 
      // bt_remove
      // 
      this.bt_remove.BackColor = System.Drawing.Color.White;
      this.bt_remove.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
      this.bt_remove.Location = new System.Drawing.Point(110, 327);
      this.bt_remove.Name = "bt_remove";
      this.bt_remove.Size = new System.Drawing.Size(125, 52);
      this.bt_remove.TabIndex = 3;
      this.bt_remove.Text = "Remove";
      this.bt_remove.UseVisualStyleBackColor = false;
      this.bt_remove.Click += new System.EventHandler(this.bt_remove_Click);
      // 
      // bt_check
      // 
      this.bt_check.BackColor = System.Drawing.Color.White;
      this.bt_check.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
      this.bt_check.Location = new System.Drawing.Point(110, 242);
      this.bt_check.Name = "bt_check";
      this.bt_check.Size = new System.Drawing.Size(125, 52);
      this.bt_check.TabIndex = 4;
      this.bt_check.Text = "Check";
      this.bt_check.UseVisualStyleBackColor = false;
      this.bt_check.Click += new System.EventHandler(this.bt_check_Click);
      // 
      // textbox_add
      // 
      this.textbox_add.AccessibleName = "";
      this.textbox_add.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold);
      this.textbox_add.Location = new System.Drawing.Point(40, 30);
      this.textbox_add.Name = "textbox_add";
      this.textbox_add.Size = new System.Drawing.Size(195, 26);
      this.textbox_add.TabIndex = 5;
      this.textbox_add.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
      // 
      // checkedListBox1
      // 
      this.checkedListBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold);
      this.checkedListBox1.FormattingEnabled = true;
      this.checkedListBox1.Location = new System.Drawing.Point(288, 30);
      this.checkedListBox1.Name = "checkedListBox1";
      this.checkedListBox1.Size = new System.Drawing.Size(195, 349);
      this.checkedListBox1.TabIndex = 9;
      this.checkedListBox1.SelectedIndexChanged += new System.EventHandler(this.checkedListBox1_SelectedIndexChanged);
      // 
      // Form1
      // 
      this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      this.BackColor = System.Drawing.Color.Silver;
      this.ClientSize = new System.Drawing.Size(522, 566);
      this.Controls.Add(this.checkedListBox1);
      this.Controls.Add(this.textbox_add);
      this.Controls.Add(this.bt_check);
      this.Controls.Add(this.bt_remove);
      this.Controls.Add(this.bt_add);
      this.Controls.Add(this.bt_exit);
      this.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
      this.Name = "Form1";
      this.Text = "TodoApp";
      this.Load += new System.EventHandler(this.Form1_Load);
      this.ResumeLayout(false);
      this.PerformLayout();

    }

    #endregion
    private System.Windows.Forms.Button bt_exit;
    private System.Windows.Forms.Button bt_add;
    private System.Windows.Forms.Button bt_remove;
    private System.Windows.Forms.Button bt_check;
    private System.Windows.Forms.TextBox textbox_add;
    private System.Windows.Forms.CheckedListBox checkedListBox1;
  }
}

