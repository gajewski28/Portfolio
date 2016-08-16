using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_RandomNumberGuessingGame
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int num;

        private void randomButton_Click(object sender, EventArgs e)
        {

            Random rand = new Random();
            
            num = rand.Next(100) + 1;

           

           
        }

        private void guessButton_Click(object sender, EventArgs e)
        {
            
                
            int guess = Convert.ToInt32(guessBox.Text);

            if (guess < num)
            {
                detailBox.Text = "Too low, try again";
            }
            if (guess > num)
            {
                detailBox.Text = "Too high, try again";
            }
            if (guess == num)
                    {
                        detailBox.Text = "CONGRADULATION, you are correct";
                    }
                }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }
            
        }
    }

