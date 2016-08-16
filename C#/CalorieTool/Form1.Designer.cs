namespace _224_Calories
{
    partial class Calories
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.fatLabel = new System.Windows.Forms.Label();
            this.fatTextBox = new System.Windows.Forms.TextBox();
            this.carbsTextBox = new System.Windows.Forms.TextBox();
            this.calcButton = new System.Windows.Forms.Button();
            this.carbsLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(40, 24);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(56, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Fat grams:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(28, 52);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(68, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Carbs grams:";
            // 
            // fatLabel
            // 
            this.fatLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.fatLabel.Location = new System.Drawing.Point(12, 84);
            this.fatLabel.Name = "fatLabel";
            this.fatLabel.Size = new System.Drawing.Size(205, 20);
            this.fatLabel.TabIndex = 2;
            // 
            // fatTextBox
            // 
            this.fatTextBox.Location = new System.Drawing.Point(102, 24);
            this.fatTextBox.Name = "fatTextBox";
            this.fatTextBox.Size = new System.Drawing.Size(100, 20);
            this.fatTextBox.TabIndex = 3;
            // 
            // carbsTextBox
            // 
            this.carbsTextBox.Location = new System.Drawing.Point(102, 49);
            this.carbsTextBox.Name = "carbsTextBox";
            this.carbsTextBox.Size = new System.Drawing.Size(100, 20);
            this.carbsTextBox.TabIndex = 4;
            // 
            // calcButton
            // 
            this.calcButton.Location = new System.Drawing.Point(76, 156);
            this.calcButton.Name = "calcButton";
            this.calcButton.Size = new System.Drawing.Size(81, 33);
            this.calcButton.TabIndex = 5;
            this.calcButton.Text = "Calculate ";
            this.calcButton.UseVisualStyleBackColor = true;
            this.calcButton.Click += new System.EventHandler(this.calcButton_Click);
            // 
            // carbsLabel
            // 
            this.carbsLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.carbsLabel.Location = new System.Drawing.Point(12, 117);
            this.carbsLabel.Name = "carbsLabel";
            this.carbsLabel.Size = new System.Drawing.Size(205, 20);
            this.carbsLabel.TabIndex = 6;
            // 
            // Calories
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(231, 202);
            this.Controls.Add(this.carbsLabel);
            this.Controls.Add(this.calcButton);
            this.Controls.Add(this.carbsTextBox);
            this.Controls.Add(this.fatTextBox);
            this.Controls.Add(this.fatLabel);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Calories";
            this.Text = "Calories";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label fatLabel;
        private System.Windows.Forms.TextBox fatTextBox;
        private System.Windows.Forms.TextBox carbsTextBox;
        private System.Windows.Forms.Button calcButton;
        private System.Windows.Forms.Label carbsLabel;
    }
}

