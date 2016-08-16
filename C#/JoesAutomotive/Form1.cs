using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_JoesAutomotive
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void calcButton_Click(object sender, EventArgs e)
        {
            double oil = 26.00;
            double lube = 18.00;
            double radiator = 30.00;
            double transmission = 80.00;
            double inspection = 15.00;
            double muffler = 100.00;
            double tireRotate = 200.00;
            const double servicesLabor = 20.00;
            const double tax = 0.06;
            double Stotal = 0.00;
            
            double parts = Convert.ToDouble(partsTextBox.Text);
            double labor = Convert.ToDouble(laborTextBox.Text);

            if (oilChangeCheckBox.Checked == true)
            {
                Stotal += oil;
            }
            if (lubeJobCheckBox.Checked == true)
            {
                Stotal += lube;
            }
            if (radiatorFlushCheckBox.Checked == true)
            {
                Stotal += radiator;
            }
            if (transmissionFlushCheckBox.Checked == true)
            {
                Stotal += transmission;
            }
            if (inspectionCheckBox.Checked == true)
            {
                Stotal += inspection;
            }
            if (replaceMufferCheckBox.Checked == true)
            {
                Stotal += muffler;
            }
            if (tireRotationCheckBox.Checked == true)
            {
                Stotal += tireRotate;
            }
            
            partsLabel.Text = parts.ToString("c");
            laborTextBox.Text = labor.ToString("c");

            
            double services = Stotal + labor;
            servicesLabel.Text = services.ToString("c");

            double taxTotal = tax * parts;

            taxLabel.Text = taxTotal.ToString("c");

            double total;

            total = labor + parts + taxTotal + Stotal;
            totalFeesLabel.Text = total.ToString("c");


        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            partsTextBox.Text = "";
            laborTextBox.Text = "";
            servicesLabel.Text = "";
            partsLabel.Text = "";
            taxLabel.Text = "";
            totalFeesLabel.Text = "";
            oilChangeCheckBox.Checked = false;
            lubeJobCheckBox.Checked = false;
            radiatorFlushCheckBox.Checked = false;
            transmissionFlushCheckBox.Checked = false;
            inspectionCheckBox.Checked = false;
            replaceMufferCheckBox.Checked = false;
            tireRotationCheckBox.Checked = false;
        }

        
    }
}
