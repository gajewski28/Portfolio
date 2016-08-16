namespace _224_SoftwareSales
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
            this.calcTotal = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.totalSales = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.discountLabel = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.purchaseLabel = new System.Windows.Forms.Label();
            this.Clear = new System.Windows.Forms.Button();
            this.Exit = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // calcTotal
            // 
            this.calcTotal.Location = new System.Drawing.Point(50, 189);
            this.calcTotal.Name = "calcTotal";
            this.calcTotal.Size = new System.Drawing.Size(83, 51);
            this.calcTotal.TabIndex = 0;
            this.calcTotal.Text = "Calculate Total";
            this.calcTotal.UseVisualStyleBackColor = true;
            this.calcTotal.Click += new System.EventHandler(this.calcTotal_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label1.Location = new System.Drawing.Point(20, 35);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(258, 15);
            this.label1.TabIndex = 1;
            this.label1.Text = "Enter the amount of packages you wish to purchase.";
            // 
            // totalSales
            // 
            this.totalSales.Location = new System.Drawing.Point(295, 32);
            this.totalSales.Name = "totalSales";
            this.totalSales.Size = new System.Drawing.Size(88, 20);
            this.totalSales.TabIndex = 2;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(197, 79);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(79, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Total Discount:";
            // 
            // discountLabel
            // 
            this.discountLabel.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.discountLabel.Location = new System.Drawing.Point(295, 71);
            this.discountLabel.Name = "discountLabel";
            this.discountLabel.Size = new System.Drawing.Size(88, 23);
            this.discountLabel.TabIndex = 4;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(194, 120);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(82, 13);
            this.label4.TabIndex = 5;
            this.label4.Text = "Total Purchase:";
            // 
            // purchaseLabel
            // 
            this.purchaseLabel.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.purchaseLabel.Location = new System.Drawing.Point(295, 119);
            this.purchaseLabel.Name = "purchaseLabel";
            this.purchaseLabel.Size = new System.Drawing.Size(88, 23);
            this.purchaseLabel.TabIndex = 6;
            // 
            // Clear
            // 
            this.Clear.Location = new System.Drawing.Point(154, 189);
            this.Clear.Name = "Clear";
            this.Clear.Size = new System.Drawing.Size(83, 51);
            this.Clear.TabIndex = 7;
            this.Clear.Text = "Clear";
            this.Clear.UseVisualStyleBackColor = true;
            this.Clear.Click += new System.EventHandler(this.Clear_Click);
            // 
            // Exit
            // 
            this.Exit.Location = new System.Drawing.Point(259, 189);
            this.Exit.Name = "Exit";
            this.Exit.Size = new System.Drawing.Size(83, 51);
            this.Exit.TabIndex = 8;
            this.Exit.Text = "Exit";
            this.Exit.UseVisualStyleBackColor = true;
            this.Exit.Click += new System.EventHandler(this.Exit_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(377, 161);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Discount/Purchase Calculator";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(401, 268);
            this.Controls.Add(this.Exit);
            this.Controls.Add(this.Clear);
            this.Controls.Add(this.purchaseLabel);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.discountLabel);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.totalSales);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.calcTotal);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Software Sales";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button calcTotal;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox totalSales;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label discountLabel;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label purchaseLabel;
        private System.Windows.Forms.Button Clear;
        private System.Windows.Forms.Button Exit;
        private System.Windows.Forms.GroupBox groupBox1;
    }
}

