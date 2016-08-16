using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_Pennies
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void calculateButton_Click(object sender, EventArgs e)
        {
            int days = Convert.ToInt32(daysWorkBox.Text);
            int penny = 1;

            int count = 1;
            double total = 0.01;
            
               while (count <= days)
               {

                   penny = penny * 2;
                  total = penny * 0.01;

                   
                   count = count + 1;
               }
            totalBox.Text = total.ToString("c");

               
           }

        }
    }

