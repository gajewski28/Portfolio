using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_ColorMixer
{
    public partial class c : Form
    {
        public c()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void ExitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void RedRadioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (RedRadioButton1.Checked && BlueRadioButton1.Checked)
            {
                this.BackColor = Color.Purple;
            }
                
        }

        private void MixButton_Click(object sender, EventArgs e)
        {
            if (RedRadioButton1.Checked && BlueRadioButton2.Checked)
            {
                this.BackColor = Color.Purple;
            }
            else if (RedRadioButton1.Checked && YellowRadioButton2.Checked)
            {
                this.BackColor = Color.Orange;
            }
            else if (BlueRadioButton1.Checked && YellowRadioButton2.Checked)
            {
                this.BackColor = Color.Green;
            }
            else if (YellowRadioButton1.Checked && RedRadioButton2.Checked)
            {
                this.BackColor = Color.Orange;
            }
            else if (YellowRadioButton1.Checked && BlueRadioButton2.Checked)
            {
                this.BackColor = Color.Green;
            }
            else if ( RedRadioButton2.Checked && BlueRadioButton1.Checked)
            {
                this.BackColor = Color.Purple;
            }
            else if (YellowRadioButton2.Checked && RedRadioButton1.Checked)
            {
                this.BackColor = Color.Orange;
            }
            else if (YellowRadioButton2.Checked && BlueRadioButton1.Checked)
            {
                this.BackColor = Color.Green;
            }
            else if (RedRadioButton1.Checked && RedRadioButton2.Checked)
            {
                this.BackColor = Color.Red;
            }
            else if (BlueRadioButton1.Checked && BlueRadioButton2.Checked)
            {
                this.BackColor = Color.Blue;
            }
            else if (YellowRadioButton1.Checked && YellowRadioButton2.Checked)
            {
                this.BackColor = Color.Yellow;
            }
            

            
        }
    }
}
