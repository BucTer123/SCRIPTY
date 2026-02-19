using System;
using System.IO;
using System.WinForms
using System.Drawing

void main() {
  Form win = new Form();
  win text = "window";
  win Size = new Size(640, 400);

  Button btn = new Button();
  btn text = "Click button";
  btn Location = new Point(130, 100);

  btn.CLick - (sender, e) => 
  {
    MessageBox("IDI NAHU");
  }
}
