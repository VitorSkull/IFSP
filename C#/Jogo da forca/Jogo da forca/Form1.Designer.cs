namespace Jogo_da_forca
{
    partial class frmJogoDaForca
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmJogoDaForca));
            this.pnJogo = new System.Windows.Forms.Panel();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.lblDica = new System.Windows.Forms.Label();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.btmIdent = new System.Windows.Forms.Button();
            this.txtletra = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.lblTrestantes = new System.Windows.Forms.Label();
            this.lblTotalDeTentativas = new System.Windows.Forms.GroupBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtPalavra = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btmStart = new System.Windows.Forms.Button();
            this.btmSair = new System.Windows.Forms.Button();
            this.picBoxLose = new System.Windows.Forms.PictureBox();
            this.picBoxWin = new System.Windows.Forms.PictureBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtLetrasDig = new System.Windows.Forms.TextBox();
            this.pnJogo.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.lblTotalDeTentativas.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picBoxLose)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picBoxWin)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // pnJogo
            // 
            this.pnJogo.Controls.Add(this.groupBox1);
            this.pnJogo.Controls.Add(this.groupBox4);
            this.pnJogo.Controls.Add(this.groupBox3);
            this.pnJogo.Controls.Add(this.groupBox2);
            this.pnJogo.Controls.Add(this.lblTotalDeTentativas);
            this.pnJogo.Controls.Add(this.txtPalavra);
            this.pnJogo.Controls.Add(this.label1);
            this.pnJogo.Location = new System.Drawing.Point(12, 12);
            this.pnJogo.Name = "pnJogo";
            this.pnJogo.Size = new System.Drawing.Size(809, 501);
            this.pnJogo.TabIndex = 0;
            this.pnJogo.Visible = false;
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.lblDica);
            this.groupBox4.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox4.Location = new System.Drawing.Point(27, 116);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(483, 100);
            this.groupBox4.TabIndex = 3;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "Tema:";
            // 
            // lblDica
            // 
            this.lblDica.AutoSize = true;
            this.lblDica.Font = new System.Drawing.Font("Comic Sans MS", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblDica.Location = new System.Drawing.Point(6, 42);
            this.lblDica.Name = "lblDica";
            this.lblDica.Size = new System.Drawing.Size(48, 23);
            this.lblDica.TabIndex = 0;
            this.lblDica.Text = "Tema";
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.btmIdent);
            this.groupBox3.Controls.Add(this.txtletra);
            this.groupBox3.Font = new System.Drawing.Font("Comic Sans MS", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox3.Location = new System.Drawing.Point(21, 295);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(489, 173);
            this.groupBox3.TabIndex = 4;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Escreva uma letra";
            // 
            // btmIdent
            // 
            this.btmIdent.Location = new System.Drawing.Point(6, 107);
            this.btmIdent.Name = "btmIdent";
            this.btmIdent.Size = new System.Drawing.Size(480, 60);
            this.btmIdent.TabIndex = 1;
            this.btmIdent.Text = "Identificar";
            this.btmIdent.UseVisualStyleBackColor = true;
            this.btmIdent.Click += new System.EventHandler(this.btmIdent_Click);
            // 
            // txtletra
            // 
            this.txtletra.Font = new System.Drawing.Font("Comic Sans MS", 16F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtletra.Location = new System.Drawing.Point(6, 64);
            this.txtletra.MaxLength = 1;
            this.txtletra.Name = "txtletra";
            this.txtletra.Size = new System.Drawing.Size(480, 37);
            this.txtletra.TabIndex = 0;
            this.txtletra.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.lblTrestantes);
            this.groupBox2.Font = new System.Drawing.Font("Comic Sans MS", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox2.Location = new System.Drawing.Point(548, 295);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(224, 154);
            this.groupBox2.TabIndex = 3;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Tentativas restantes";
            // 
            // lblTrestantes
            // 
            this.lblTrestantes.AutoSize = true;
            this.lblTrestantes.Font = new System.Drawing.Font("Comic Sans MS", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTrestantes.Location = new System.Drawing.Point(98, 67);
            this.lblTrestantes.Name = "lblTrestantes";
            this.lblTrestantes.Size = new System.Drawing.Size(30, 33);
            this.lblTrestantes.TabIndex = 0;
            this.lblTrestantes.Text = "5";
            // 
            // lblTotalDeTentativas
            // 
            this.lblTotalDeTentativas.Controls.Add(this.label2);
            this.lblTotalDeTentativas.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTotalDeTentativas.Location = new System.Drawing.Point(548, 116);
            this.lblTotalDeTentativas.Name = "lblTotalDeTentativas";
            this.lblTotalDeTentativas.Size = new System.Drawing.Size(224, 143);
            this.lblTotalDeTentativas.TabIndex = 2;
            this.lblTotalDeTentativas.TabStop = false;
            this.lblTotalDeTentativas.Text = "Total de tentativas";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Comic Sans MS", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(98, 67);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(30, 33);
            this.label2.TabIndex = 0;
            this.label2.Text = "5";
            // 
            // txtPalavra
            // 
            this.txtPalavra.Enabled = false;
            this.txtPalavra.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtPalavra.Location = new System.Drawing.Point(21, 54);
            this.txtPalavra.Name = "txtPalavra";
            this.txtPalavra.Size = new System.Drawing.Size(751, 37);
            this.txtPalavra.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(16, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(238, 30);
            this.label1.TabIndex = 0;
            this.label1.Text = "Identifique a palavra:";
            // 
            // btmStart
            // 
            this.btmStart.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btmStart.Location = new System.Drawing.Point(12, 519);
            this.btmStart.Name = "btmStart";
            this.btmStart.Size = new System.Drawing.Size(389, 83);
            this.btmStart.TabIndex = 1;
            this.btmStart.Text = "Start";
            this.btmStart.UseVisualStyleBackColor = true;
            this.btmStart.Click += new System.EventHandler(this.btmStart_Click);
            // 
            // btmSair
            // 
            this.btmSair.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btmSair.Location = new System.Drawing.Point(438, 519);
            this.btmSair.Name = "btmSair";
            this.btmSair.Size = new System.Drawing.Size(383, 83);
            this.btmSair.TabIndex = 2;
            this.btmSair.Text = "Sair";
            this.btmSair.UseVisualStyleBackColor = true;
            this.btmSair.Click += new System.EventHandler(this.btmSair_Click);
            // 
            // picBoxLose
            // 
            this.picBoxLose.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("picBoxLose.BackgroundImage")));
            this.picBoxLose.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.picBoxLose.Location = new System.Drawing.Point(827, 128);
            this.picBoxLose.Name = "picBoxLose";
            this.picBoxLose.Size = new System.Drawing.Size(453, 370);
            this.picBoxLose.TabIndex = 5;
            this.picBoxLose.TabStop = false;
            this.picBoxLose.Visible = false;
            // 
            // picBoxWin
            // 
            this.picBoxWin.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("picBoxWin.BackgroundImage")));
            this.picBoxWin.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.picBoxWin.Location = new System.Drawing.Point(828, 119);
            this.picBoxWin.Name = "picBoxWin";
            this.picBoxWin.Size = new System.Drawing.Size(442, 394);
            this.picBoxWin.TabIndex = 6;
            this.picBoxWin.TabStop = false;
            this.picBoxWin.Visible = false;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtLetrasDig);
            this.groupBox1.Font = new System.Drawing.Font("Comic Sans MS", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.Location = new System.Drawing.Point(27, 222);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(483, 67);
            this.groupBox1.TabIndex = 4;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Letras digitadas:";
            // 
            // txtLetrasDig
            // 
            this.txtLetrasDig.Enabled = false;
            this.txtLetrasDig.Font = new System.Drawing.Font("Comic Sans MS", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtLetrasDig.Location = new System.Drawing.Point(10, 37);
            this.txtLetrasDig.Name = "txtLetrasDig";
            this.txtLetrasDig.Size = new System.Drawing.Size(467, 24);
            this.txtLetrasDig.TabIndex = 0;
            // 
            // frmJogoDaForca
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1271, 614);
            this.Controls.Add(this.picBoxWin);
            this.Controls.Add(this.picBoxLose);
            this.Controls.Add(this.btmSair);
            this.Controls.Add(this.btmStart);
            this.Controls.Add(this.pnJogo);
            this.Name = "frmJogoDaForca";
            this.Text = "JogoDaForca";
            this.pnJogo.ResumeLayout(false);
            this.pnJogo.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.lblTotalDeTentativas.ResumeLayout(false);
            this.lblTotalDeTentativas.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.picBoxLose)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picBoxWin)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel pnJogo;
        private System.Windows.Forms.TextBox txtPalavra;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btmStart;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.TextBox txtletra;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label lblTrestantes;
        private System.Windows.Forms.GroupBox lblTotalDeTentativas;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btmIdent;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Label lblDica;
        private System.Windows.Forms.Button btmSair;
        private System.Windows.Forms.PictureBox picBoxLose;
        private System.Windows.Forms.PictureBox picBoxWin;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtLetrasDig;
    }
}

