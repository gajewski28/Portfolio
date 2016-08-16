using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_SoftwareSales
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void calcTotal_Click(object sender, EventArgs e)
        {
            double num, total, price, totalPrice;

            num = double.Parse(totalSales.Text);

            if (num <= 19)
            {
                total  = 99 * num;
                price = (total * 0.2);
                totalPrice = total - price;

                discountLabel.Text = "20% dicsount";
                purchaseLabel.Text = totalPrice.ToString();

            }
            else if (num <= 49)
            {
                total = (99 * num);
                price = (total * 0.3);
                totalPrice = total - price;

                discountLabel.Text = "30% discount";
                purchaseLabel.Text = totalPrice.ToString();
            }
            else if (num <= 99)
            {
                total = (99 * num);
                price = (total * 0.4);
                totalPrice = total - price;

                discountLabel.Text = "40% discount";
                purchaseLabel.Text = totalPrice.ToString();
            }
            else if (num >= 100)
            {
                total = (99 * num);
                price = (total * 0.5);
                totalPrice = total - price;

                discountLabel.Text = "50% discount";
                purchaseLabel.Text = totalPrice.ToString();
            }
        }

        private void Clear_Click(object sender, EventArgs e)
        {
            discountLabel.Text = "";
            purchaseLabel.Text = "";
            totalSales.Text = "";
        }

        private void Exit_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
