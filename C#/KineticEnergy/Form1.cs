using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_KineticEnergy
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private double KineticEnergy(double mass, double velocity)
        {
           
            double KE = .5 * Math.Pow((mass * velocity), 2);

            return KE;
        }

        private void calcButton_Click(object sender, EventArgs e)
        {
            double value = KineticEnergy(Convert.ToDouble(massTextBox.Text),
                Convert.ToDouble(velocityTextBox.Text));
            answerLabel.Text = value.ToString();
           
        }
    }
}
