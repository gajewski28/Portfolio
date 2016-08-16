namespace BodyMassIndex
{
    partial class Form1
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
            this.WeightButton = new System.Windows.Forms.Label();
            this.HeightButton = new System.Windows.Forms.Label();
            this.WeightTextBox = new System.Windows.Forms.TextBox();
            this.HeightTextBox = new System.Windows.Forms.TextBox();
            this.BMIButton = new System.Windows.Forms.Button();
            this.ConversionLabel = new System.Windows.Forms.Label();
            this.ClearButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // WeightButton
            // 
            this.WeightButton.AutoSize = true;
            this.WeightButton.Location = new System.Drawing.Point(22, 48);
            this.WeightButton.Name = "WeightButton";
            this.WeightButton.Size = new System.Drawing.Size(115, 13);
            this.WeightButton.TabIndex = 0;
            this.WeightButton.Text = "Enter weight in pounds";
            // 
            // HeightButton
            // 
            this.HeightButton.Location = new System.Drawing.Point(22, 87);
            this.HeightButton.Name = "HeightButton";
            this.HeightButton.Size = new System.Drawing.Size(117, 15);
            this.HeightButton.TabIndex = 1;
            this.HeightButton.Text = "Enter height in inches";
            // 
            // WeightTextBox
            // 
            this.WeightTextBox.Location = new System.Drawing.Point(160, 43);
            this.WeightTextBox.Name = "WeightTextBox";
            this.WeightTextBox.Size = new System.Drawing.Size(82, 20);
            this.WeightTextBox.TabIndex = 2;
            // 
            // HeightTextBox
            // 
            this.HeightTextBox.Location = new System.Drawing.Point(160, 82);
            this.HeightTextBox.Name = "HeightTextBox";
            this.HeightTextBox.Size = new System.Drawing.Size(82, 20);
            this.HeightTextBox.TabIndex = 3;
            // 
            // BMIButton
            // 
            this.BMIButton.Location = new System.Drawing.Point(22, 166);
            this.BMIButton.Name = "BMIButton";
            this.BMIButton.Size = new System.Drawing.Size(117, 23);
            this.BMIButton.TabIndex = 4;
            this.BMIButton.Text = "BMI Calculator";
            this.BMIButton.UseVisualStyleBackColor = true;
            this.BMIButton.Click += new System.EventHandler(this.BMIButton_Click);
            // 
            // ConversionLabel
            // 
            this.ConversionLabel.Location = new System.Drawing.Point(96, 122);
            this.ConversionLabel.Name = "ConversionLabel";
            this.ConversionLabel.Size = new System.Drawing.Size(82, 22);
            this.ConversionLabel.TabIndex = 5;
            this.ConversionLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // ClearButton
            // 
            this.ClearButton.Location = new System.Drawing.Point(167, 166);
            this.ClearButton.Name = "ClearButton";
            this.ClearButton.Size = new System.Drawing.Size(75, 23);
            this.ClearButton.TabIndex = 6;
            this.ClearButton.Text = "Clear";
            this.ClearButton.UseVisualStyleBackColor = true;
            this.ClearButton.Click += new System.EventHandler(this.ClearButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(274, 214);
            this.Controls.Add(this.ClearButton);
            this.Controls.Add(this.ConversionLabel);
            this.Controls.Add(this.BMIButton);
            this.Controls.Add(this.HeightTextBox);
            this.Controls.Add(this.WeightTextBox);
            this.Controls.Add(this.HeightButton);
            this.Controls.Add(this.WeightButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label WeightButton;
        private System.Windows.Forms.Label HeightButton;
        private System.Windows.Forms.TextBox WeightTextBox;
        private System.Windows.Forms.TextBox HeightTextBox;
        private System.Windows.Forms.Button BMIButton;
        private System.Windows.Forms.Label ConversionLabel;
        private System.Windows.Forms.Button ClearButton;
    }
}

