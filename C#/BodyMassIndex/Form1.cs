using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BodyMassIndex
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void BMIButton_Click(object sender, EventArgs e)
        {
            float height, weight, BMI;

            weight = float.Parse(WeightTextBox.Text);
            height = float.Parse(HeightTextBox.Text);

            BMI = weight * 703 / (height * height);

            ConversionLabel.Text = BMI.ToString();




        }

        private void ClearButton_Click(object sender, EventArgs e)
        {
            WeightTextBox.Text = "";
            HeightTextBox.Text = "";
            ConversionLabel.Text = "";
        }

       
    }
}
