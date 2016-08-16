using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_CaluclatingFactorialNumber
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void factorialButton_Click(object sender, EventArgs e)
        {
            int num = int.Parse(numTextBox.Text);
            int total = num;
            


            for (int i = 1; i < num; i++)
            {
                total = total * i;
                
            }
            valueTextBox.Text = total.ToString();

        }
    }
}
