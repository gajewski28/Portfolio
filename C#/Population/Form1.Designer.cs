namespace _224_Population
{
    partial class populationApplication
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
            this.calculateButton = new System.Windows.Forms.Button();
            this.startPopBox = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.percentBox = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.numOfDaysBox = new System.Windows.Forms.TextBox();
            this.listBox = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // calculateButton
            // 
            this.calculateButton.Location = new System.Drawing.Point(248, 398);
            this.calculateButton.Name = "calculateButton";
            this.calculateButton.Size = new System.Drawing.Size(102, 51);
            this.calculateButton.TabIndex = 0;
            this.calculateButton.Text = "Calculate Population";
            this.calculateButton.UseVisualStyleBackColor = true;
            this.calculateButton.Click += new System.EventHandler(this.calculateButton_Click);
            // 
            // startPopBox
            // 
            this.startPopBox.Location = new System.Drawing.Point(312, 35);
            this.startPopBox.Name = "startPopBox";
            this.startPopBox.Size = new System.Drawing.Size(100, 20);
            this.startPopBox.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(168, 35);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(133, 26);
            this.label1.TabIndex = 2;
            this.label1.Text = "Enter the Total Population:\r\n\r\n";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(184, 69);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(117, 26);
            this.label2.TabIndex = 3;
            this.label2.Text = "Average daily increase:\r\n\r\n";
            // 
            // percentBox
            // 
            this.percentBox.Location = new System.Drawing.Point(312, 69);
            this.percentBox.Name = "percentBox";
            this.percentBox.Size = new System.Drawing.Size(100, 20);
            this.percentBox.TabIndex = 4;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(101, 107);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(200, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Enter the total amount of days to multiply:";
            // 
            // numOfDaysBox
            // 
            this.numOfDaysBox.Location = new System.Drawing.Point(312, 104);
            this.numOfDaysBox.Name = "numOfDaysBox";
            this.numOfDaysBox.Size = new System.Drawing.Size(100, 20);
            this.numOfDaysBox.TabIndex = 6;
            // 
            // listBox
            // 
            this.listBox.FormattingEnabled = true;
            this.listBox.Location = new System.Drawing.Point(165, 177);
            this.listBox.Name = "listBox";
            this.listBox.Size = new System.Drawing.Size(262, 212);
            this.listBox.TabIndex = 7;
            // 
            // populationApplication
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(586, 461);
            this.Controls.Add(this.listBox);
            this.Controls.Add(this.numOfDaysBox);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.percentBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.startPopBox);
            this.Controls.Add(this.calculateButton);
            this.Name = "populationApplication";
            this.Text = "Population Calculator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button calculateButton;
        private System.Windows.Forms.TextBox startPopBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox percentBox;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox numOfDaysBox;
        private System.Windows.Forms.ListBox listBox;
    }
}

