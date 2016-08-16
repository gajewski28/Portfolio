using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_SinghAutomotive
{
    public partial class ChrisGajewski : Form
    {
        public ChrisGajewski()
        {
            InitializeComponent();
        }

        private double OilLubeCharges()
        {
            
            double total = 0;

            if (oilCheckBox.Checked)
            {
                total += 26.00;
                
            }
            

            if (lubeCheckBox.Checked)
            {
                total += 18.00;
               
            }
            
            return total;
        }

        private double FlushCharges()
        {
            double total = 0;

            if (radiatorCheckBox.Checked)
            {
                total += 75.00;
                
            }

            if (transmissionCheckBox.Checked)
            {
                total += 80.00;
                
                
            }
            return total;
        }

        private double MiscCharges()
        {
            double total = 0;

            if (inspectionCheckBox.Checked)
            {
                total += 15.00;
               
            }
            if (mufflerCheckBox.Checked)
            {
                total += 200.00;
                
            }
            if (tireCheckBox.Checked)
            {
                total += 40.00;
                
             
            }
            return total;
        }

        private double OtherCharges()
        {
            double total = 0;
            double labor;
            double parts;

            if (double.TryParse(partsTextBox.Text, out parts))
            {
                
                partsLabel.Text = parts.ToString("c");
                
            }

            if (double.TryParse(laborTextBox.Text, out labor))
            {
                
                serviceLabel.Text = labor.ToString("c") + total.ToString("c");
                return labor;
                
            }
            return total;
        }

        private double TaxCharges()
        {
            double parts = Convert.ToDouble(partsTextBox.Text);
            double tax;
            double total;

            tax = parts * 0.08;
            taxLabel.Text = tax.ToString("c");
            total = tax + parts;

            
            return total;

        }

        private double TotalCharges()
        {
            double total = 0;
            double serviceTotal = OilLubeCharges() + FlushCharges() + MiscCharges();
            total = OilLubeCharges() + FlushCharges() + MiscCharges() + OtherCharges() + TaxCharges();
            totalLabel.Text = total.ToString("c");
            serviceLabel.Text = serviceTotal.ToString("c");
            return total;

        }
        
        private void ClearOilLube()
        {
            oilCheckBox.Checked = false;
            lubeCheckBox.Checked = false;

        }

        private void ClearFlushes()
        {
            radiatorCheckBox.Checked = false;
            transmissionCheckBox.Checked = false;

        }

        private void ClearMisc()
        {
            inspectionCheckBox.Checked = false;
            mufflerCheckBox.Checked = false;
            tireCheckBox.Checked = false;
        }

        private void ClearOther()
        {
            partsTextBox.Text = " ";
            laborTextBox.Text = " ";
         

        }

        private void ClearFess()
        {
            serviceLabel.Text = " ";
            partsLabel.Text = " ";
            taxLabel.Text = " ";
            totalLabel.Text = " ";
        }



        private void calcButton_Click(object sender, EventArgs e)
        {
            OilLubeCharges();
            FlushCharges();
            MiscCharges();
            OtherCharges();
            TaxCharges();
            TotalCharges();
 
        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            ClearOilLube();
            ClearFlushes();
            ClearMisc();
            ClearOther();
            ClearFess();
        }
        
       
    }
}
