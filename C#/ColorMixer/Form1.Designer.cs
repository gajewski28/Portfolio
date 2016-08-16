namespace _224_ColorMixer
{
    partial class c
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
            this.RedRadioButton1 = new System.Windows.Forms.RadioButton();
            this.BlueRadioButton1 = new System.Windows.Forms.RadioButton();
            this.YellowRadioButton1 = new System.Windows.Forms.RadioButton();
            this.RedRadioButton2 = new System.Windows.Forms.RadioButton();
            this.BlueRadioButton2 = new System.Windows.Forms.RadioButton();
            this.YellowRadioButton2 = new System.Windows.Forms.RadioButton();
            this.GroupBox1 = new System.Windows.Forms.GroupBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.MixButton = new System.Windows.Forms.Button();
            this.ExitButton = new System.Windows.Forms.Button();
            this.GroupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // RedRadioButton1
            // 
            this.RedRadioButton1.AutoSize = true;
            this.RedRadioButton1.Location = new System.Drawing.Point(44, 35);
            this.RedRadioButton1.Name = "RedRadioButton1";
            this.RedRadioButton1.Size = new System.Drawing.Size(45, 17);
            this.RedRadioButton1.TabIndex = 0;
            this.RedRadioButton1.TabStop = true;
            this.RedRadioButton1.Text = "Red";
            this.RedRadioButton1.UseVisualStyleBackColor = true;
            this.RedRadioButton1.CheckedChanged += new System.EventHandler(this.RedRadioButton1_CheckedChanged);
            // 
            // BlueRadioButton1
            // 
            this.BlueRadioButton1.AutoSize = true;
            this.BlueRadioButton1.Location = new System.Drawing.Point(44, 71);
            this.BlueRadioButton1.Name = "BlueRadioButton1";
            this.BlueRadioButton1.Size = new System.Drawing.Size(46, 17);
            this.BlueRadioButton1.TabIndex = 1;
            this.BlueRadioButton1.TabStop = true;
            this.BlueRadioButton1.Text = "Blue";
            this.BlueRadioButton1.UseVisualStyleBackColor = true;
            // 
            // YellowRadioButton1
            // 
            this.YellowRadioButton1.AutoSize = true;
            this.YellowRadioButton1.Location = new System.Drawing.Point(44, 109);
            this.YellowRadioButton1.Name = "YellowRadioButton1";
            this.YellowRadioButton1.Size = new System.Drawing.Size(56, 17);
            this.YellowRadioButton1.TabIndex = 2;
            this.YellowRadioButton1.TabStop = true;
            this.YellowRadioButton1.Text = "Yellow";
            this.YellowRadioButton1.UseVisualStyleBackColor = true;
            // 
            // RedRadioButton2
            // 
            this.RedRadioButton2.AutoSize = true;
            this.RedRadioButton2.Location = new System.Drawing.Point(50, 35);
            this.RedRadioButton2.Name = "RedRadioButton2";
            this.RedRadioButton2.Size = new System.Drawing.Size(45, 17);
            this.RedRadioButton2.TabIndex = 3;
            this.RedRadioButton2.TabStop = true;
            this.RedRadioButton2.Text = "Red";
            this.RedRadioButton2.UseVisualStyleBackColor = true;
            // 
            // BlueRadioButton2
            // 
            this.BlueRadioButton2.AutoSize = true;
            this.BlueRadioButton2.Location = new System.Drawing.Point(50, 71);
            this.BlueRadioButton2.Name = "BlueRadioButton2";
            this.BlueRadioButton2.Size = new System.Drawing.Size(46, 17);
            this.BlueRadioButton2.TabIndex = 4;
            this.BlueRadioButton2.TabStop = true;
            this.BlueRadioButton2.Text = "Blue";
            this.BlueRadioButton2.UseVisualStyleBackColor = true;
            // 
            // YellowRadioButton2
            // 
            this.YellowRadioButton2.AutoSize = true;
            this.YellowRadioButton2.Location = new System.Drawing.Point(50, 109);
            this.YellowRadioButton2.Name = "YellowRadioButton2";
            this.YellowRadioButton2.Size = new System.Drawing.Size(56, 17);
            this.YellowRadioButton2.TabIndex = 5;
            this.YellowRadioButton2.TabStop = true;
            this.YellowRadioButton2.Text = "Yellow";
            this.YellowRadioButton2.UseVisualStyleBackColor = true;
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.RedRadioButton1);
            this.GroupBox1.Controls.Add(this.YellowRadioButton1);
            this.GroupBox1.Controls.Add(this.BlueRadioButton1);
            this.GroupBox1.Location = new System.Drawing.Point(16, 45);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(186, 145);
            this.GroupBox1.TabIndex = 7;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "Select the First Color";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.YellowRadioButton2);
            this.groupBox2.Controls.Add(this.RedRadioButton2);
            this.groupBox2.Controls.Add(this.BlueRadioButton2);
            this.groupBox2.Location = new System.Drawing.Point(265, 45);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(187, 145);
            this.groupBox2.TabIndex = 8;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Select the second Color";
            // 
            // MixButton
            // 
            this.MixButton.Location = new System.Drawing.Point(143, 224);
            this.MixButton.Name = "MixButton";
            this.MixButton.Size = new System.Drawing.Size(75, 23);
            this.MixButton.TabIndex = 6;
            this.MixButton.Text = "Mix";
            this.MixButton.UseVisualStyleBackColor = true;
            this.MixButton.Click += new System.EventHandler(this.MixButton_Click);
            // 
            // ExitButton
            // 
            this.ExitButton.Location = new System.Drawing.Point(248, 224);
            this.ExitButton.Name = "ExitButton";
            this.ExitButton.Size = new System.Drawing.Size(75, 23);
            this.ExitButton.TabIndex = 9;
            this.ExitButton.Text = "Exit";
            this.ExitButton.UseVisualStyleBackColor = true;
            this.ExitButton.Click += new System.EventHandler(this.ExitButton_Click);
            // 
            // c
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(501, 281);
            this.Controls.Add(this.ExitButton);
            this.Controls.Add(this.MixButton);
            this.Controls.Add(this.GroupBox1);
            this.Controls.Add(this.groupBox2);
            this.Name = "c";
            this.Text = "Color Mixer";
            this.GroupBox1.ResumeLayout(false);
            this.GroupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.RadioButton RedRadioButton1;
        private System.Windows.Forms.RadioButton BlueRadioButton1;
        private System.Windows.Forms.RadioButton YellowRadioButton1;
        private System.Windows.Forms.RadioButton RedRadioButton2;
        private System.Windows.Forms.RadioButton BlueRadioButton2;
        private System.Windows.Forms.RadioButton YellowRadioButton2;
        private System.Windows.Forms.GroupBox GroupBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button MixButton;
        private System.Windows.Forms.Button ExitButton;
    }
}

