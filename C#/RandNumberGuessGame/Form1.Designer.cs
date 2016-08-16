namespace _224_RandomNumberGuessingGame
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
            this.randomButton = new System.Windows.Forms.Button();
            this.guessBox = new System.Windows.Forms.TextBox();
            this.detailBox = new System.Windows.Forms.TextBox();
            this.guessButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // randomButton
            // 
            this.randomButton.Location = new System.Drawing.Point(12, 128);
            this.randomButton.Name = "randomButton";
            this.randomButton.Size = new System.Drawing.Size(88, 64);
            this.randomButton.TabIndex = 0;
            this.randomButton.Text = "Generate Random Number";
            this.randomButton.UseVisualStyleBackColor = true;
            this.randomButton.Click += new System.EventHandler(this.randomButton_Click);
            // 
            // guessBox
            // 
            this.guessBox.Location = new System.Drawing.Point(172, 25);
            this.guessBox.Name = "guessBox";
            this.guessBox.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.guessBox.Size = new System.Drawing.Size(100, 20);
            this.guessBox.TabIndex = 2;
            // 
            // detailBox
            // 
            this.detailBox.Location = new System.Drawing.Point(51, 79);
            this.detailBox.Name = "detailBox";
            this.detailBox.Size = new System.Drawing.Size(175, 20);
            this.detailBox.TabIndex = 3;
            // 
            // guessButton
            // 
            this.guessButton.Location = new System.Drawing.Point(106, 128);
            this.guessButton.Name = "guessButton";
            this.guessButton.Size = new System.Drawing.Size(88, 64);
            this.guessButton.TabIndex = 4;
            this.guessButton.Text = "Generate Answer";
            this.guessButton.UseVisualStyleBackColor = true;
            this.guessButton.Click += new System.EventHandler(this.guessButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(27, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(117, 13);
            this.label1.TabIndex = 5;
            this.label1.Text = "Enter a random integer:\r\n";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(201, 128);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(88, 64);
            this.button1.TabIndex = 6;
            this.button1.Text = "Exit";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(299, 207);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.guessButton);
            this.Controls.Add(this.detailBox);
            this.Controls.Add(this.guessBox);
            this.Controls.Add(this.randomButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button randomButton;
        private System.Windows.Forms.TextBox guessBox;
        private System.Windows.Forms.TextBox detailBox;
        private System.Windows.Forms.Button guessButton;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
    }
}

