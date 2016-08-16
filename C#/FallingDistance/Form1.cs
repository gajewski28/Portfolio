using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_FallingDistance
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private double FallingDistance(double distance)
        {
            int t = Convert.ToInt32(timeTextBox.Text);
            double g = 9.8;

            double d = .5 * Math.Pow((g * t) ,2);

            return d; 
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double time, value;

            if (double.TryParse(timeTextBox.Text, out time))
            {
                value = FallingDistance(time);

                valueLabel.Text = value.ToString();
            }



            
            
        }
    }
}
