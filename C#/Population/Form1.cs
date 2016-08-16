using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_Population
{
    public partial class populationApplication : Form
    {
        public populationApplication()
        {
            InitializeComponent();
        }

        private void calculateButton_Click(object sender, EventArgs e)
        {
            





            float count = 1;
            float pop;
            float percent;
            int days;

            int two = 2;
            listBox.Items.Add("The total days " + count + " and the total population: " + two.ToString());


            if (float.TryParse(startPopBox.Text, out pop))
            {
                if (float.TryParse(percentBox.Text, out percent))
                {
                    if (int.TryParse(numOfDaysBox.Text, out days))
                    {
                       for (count = pop; count <= days; count ++)
                       {
                            pop = pop + (percent * pop);

                            listBox.Items.Add("The total days " + count + " and the total population: " + pop.ToString());


                        }

                        //listBox.Text = total.ToString("c");
                    }
                    else
                    {
                        MessageBox.Show("Invalid value for number of days to multiply");
                    }
                }
                else
                {
                    MessageBox.Show("Invalid value for percent");
                }
            }
            else
            {
                MessageBox.Show("Invalid value for total population");
            }


        }

        
    }
 
}
