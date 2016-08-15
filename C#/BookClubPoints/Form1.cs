using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_BookClubPoints
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void ExitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void PointConversionButton_Click(object sender, EventArgs e)
        {
            int books;

            books = int.Parse(booksPurchased.Text);

            if (books <= 0) 
            {
                PointsAwarded.Text = "0 points";
            }
            else if (books <= 1)
            {
                PointsAwarded.Text = "5 points";
            }
            else if (books <=2)
            {
                PointsAwarded.Text = "15 points";
            }
            else if (books <= 3)
            {
                PointsAwarded.Text = "30 points";
            }
        
            else if(books >= 4)
            {
                PointsAwarded.Text = "60 points";
            }
        }
    }
}
