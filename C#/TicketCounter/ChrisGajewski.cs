using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_TicketCounter
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ClassATextBox1.Text = "";
            ClassBTextBox1.Text = "";
            ClassCTextBox1.Text = "";
            ClassATextBox2.Text = "";
            ClassBTextBox2.Text = "";
            ClassCTextBox2.Text = "";
            TotalTextBox.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            float classA, classB, classC, totalA, totalB, totalC, totalABC;
 

           

            classA = float.Parse(ClassATextBox1.Text);
            classB = float.Parse(ClassBTextBox1.Text);
            classC = float.Parse(ClassCTextBox1.Text);

            totalA = classA * 15;
            totalB = classB * 12;
            totalC = classC * 9;
            totalABC = totalA + totalB + totalC;

            ClassATextBox2.Text = totalA.ToString("c");
            ClassBTextBox2.Text = totalB.ToString("c");
            ClassCTextBox2.Text = totalC.ToString("c");
            TotalTextBox.Text = totalABC.ToString("c");




        }
    }
}
