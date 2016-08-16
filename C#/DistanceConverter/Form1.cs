using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _244_DinstanceConverter
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void ConvertButton_Click(object sender, EventArgs e)
        {
            
            double fromDistance, toDistance = 0;

            fromDistance = double.Parse(DistanceTextBox.Text);
            String measureInput = FromList.Items[FromList.SelectedIndex].ToString();
            string measureOutput = ToList.Items[ToList.SelectedIndex].ToString();

            switch (measureInput)
            {
                case "Inches":
                    switch (measureOutput)
                    {
                        case "Inches":
                            toDistance = fromDistance;
                            break;
                        case "Feet":
                            toDistance = fromDistance / 12;
                            break;
                        case "Yards":
                            toDistance = fromDistance * 0.027778;
                            break;
                    }
                    break;
                    
                case "Feet":
                    switch (measureOutput)
                    {
                        case "Inches":
                            toDistance = fromDistance * 12;
                            break;
                        case "Feet":
                            toDistance = fromDistance;
                            break;
                        case "Yards":
                            toDistance = fromDistance * 0.333333;
                            break;

                    }
                    break;

                case "Yards":
                    switch (measureOutput)
                    {
                        case "Inches":
                            toDistance = fromDistance * 36;
                            break;
                        case "Feet":
                            toDistance = fromDistance * 3;
                            break;
                        case "Yards":
                            toDistance = fromDistance;
                            break;


                    }
                    break;



                 

            }

            conversionOutput.Text = toDistance.ToString();

            



        }
    }
}
