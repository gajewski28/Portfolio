namespace _224_BookClubPoints
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.booksPurchased = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.PointsAwarded = new System.Windows.Forms.Label();
            this.PointConversionButton = new System.Windows.Forms.Button();
            this.ExitButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label1.Location = new System.Drawing.Point(19, 40);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(193, 15);
            this.label1.TabIndex = 0;
            this.label1.Text = "Enter the number of books purchased. ";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(254, 40);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(0, 13);
            this.label2.TabIndex = 1;
            // 
            // booksPurchased
            // 
            this.booksPurchased.Location = new System.Drawing.Point(218, 37);
            this.booksPurchased.Name = "booksPurchased";
            this.booksPurchased.Size = new System.Drawing.Size(100, 20);
            this.booksPurchased.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label3.Location = new System.Drawing.Point(129, 73);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(83, 15);
            this.label3.TabIndex = 3;
            this.label3.Text = "Points Awarded";
            // 
            // PointsAwarded
            // 
            this.PointsAwarded.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.PointsAwarded.Location = new System.Drawing.Point(218, 73);
            this.PointsAwarded.Name = "PointsAwarded";
            this.PointsAwarded.Size = new System.Drawing.Size(100, 15);
            this.PointsAwarded.TabIndex = 4;
            // 
            // PointConversionButton
            // 
            this.PointConversionButton.Location = new System.Drawing.Point(90, 128);
            this.PointConversionButton.Name = "PointConversionButton";
            this.PointConversionButton.Size = new System.Drawing.Size(74, 45);
            this.PointConversionButton.TabIndex = 5;
            this.PointConversionButton.Text = "Point Conversion";
            this.PointConversionButton.UseVisualStyleBackColor = true;
            this.PointConversionButton.Click += new System.EventHandler(this.PointConversionButton_Click);
            // 
            // ExitButton
            // 
            this.ExitButton.Location = new System.Drawing.Point(192, 128);
            this.ExitButton.Name = "ExitButton";
            this.ExitButton.Size = new System.Drawing.Size(74, 45);
            this.ExitButton.TabIndex = 6;
            this.ExitButton.Text = "Exit";
            this.ExitButton.UseVisualStyleBackColor = true;
            this.ExitButton.Click += new System.EventHandler(this.ExitButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(352, 185);
            this.Controls.Add(this.ExitButton);
            this.Controls.Add(this.PointConversionButton);
            this.Controls.Add(this.PointsAwarded);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.booksPurchased);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Book Club Points";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox booksPurchased;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label PointsAwarded;
        private System.Windows.Forms.Button PointConversionButton;
        private System.Windows.Forms.Button ExitButton;
    }
}

