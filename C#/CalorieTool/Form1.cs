using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _224_Calories
{
    public partial class Calories : Form
    {
        public Calories()
        {
            InitializeComponent();
        }
        private int FatCalories (int fat)
        {
            int calories = fat * 9;
            return calories;
        }
        private int CarbCalories (int carb)
        {
            int calories = carb * 4;
            return calories;
        }
        private void calcButton_Click(object sender, EventArgs e)
        {
            int fat = FatCalories(Convert.ToInt32(fatTextBox.Text));
            int carbs = CarbCalories(Convert.ToInt32(carbsTextBox.Text));
            fatLabel.Text = "Calories from Fat: " + fat.ToString();
            carbsLabel.Text = "Calories from carbs: " + carbs.ToString();


        }
    }
}
