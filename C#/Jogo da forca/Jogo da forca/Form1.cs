using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Jogo_da_forca
{
    public partial class frmJogoDaForca : Form
    {
        private String palavra;
        private String tela;
        private int tentativas;
        private int pospalavra;

        List<String> palavras = new List<String>();
        List<String> temas = new List<String>();


        
        public frmJogoDaForca()
        {
            InitializeComponent();
            this.iniciarLista();
        }

        public void iniciarLista()
        {

            palavras.Add("banana");
            temas.Add("Fruta");

            palavras.Add("maça");
            temas.Add("Fruta");

            palavras.Add("pera");
            temas.Add("Fruta");

            palavras.Add("uva");
            temas.Add("Fruta");

            palavras.Add("laranja");
            temas.Add("Fruta");

            palavras.Add("futebol");
            temas.Add("Esporte");

            palavras.Add("corrida");
            temas.Add("Esporte");

            palavras.Add("boxe");
            temas.Add("Esporte");

            palavras.Add("natação");
            temas.Add("Esporte");

            palavras.Add("basquete");
            temas.Add("Esporte");

            palavras.Add("tesoura");
            temas.Add("Objeto");

            palavras.Add("garfo");
            temas.Add("Objeto");

            palavras.Add("copo");
            temas.Add("Objeto");

            palavras.Add("teclado");
            temas.Add("Objeto");

            palavras.Add("caneta");
            temas.Add("Objeto");

            palavras.Add("azul");
            temas.Add("Cor");

            palavras.Add("roxo");
            temas.Add("Cor");

            palavras.Add("amarelo");
            temas.Add("Cor");

            palavras.Add("cinza");
            temas.Add("Cor");

            palavras.Add("verde");
            temas.Add("Cor");
        }
        private void btmStart_Click(object sender, EventArgs e)
        {
            pnJogo.Visible = true;
            btmStart.Visible = false;
            btmSair.Visible = false;
            picBoxLose.Visible = false;
            picBoxWin.Visible = false;
            this.iniciaJogo();
        }

        private void iniciaJogo()
        {
            Random r = new Random();
            pospalavra = r.Next(0, 10);
            palavra = palavras[pospalavra];
            tela = "";
            for (int i = 0; i < palavra.Length; i++)
            {
                tela = tela + "#";
            }
            txtPalavra.Text = tela;
            lblDica.Text = temas[pospalavra];
            tentativas = 5;
            lblTrestantes.Text = tentativas.ToString();
            txtLetrasDig.Text = "";
        }

        private void btmIdent_Click(object sender, EventArgs e)
        {

            Boolean encontrou = false;
            Char letra = '0';
            if (txtLetrasDig.Text.Length <= 0)
            {
                txtLetrasDig.Text = txtLetrasDig.Text + txtletra.Text;
            }
                else
                {
                    txtLetrasDig.Text = txtLetrasDig.Text + ", " + txtletra.Text;
                }
            try
            {
                letra = Convert.ToChar(txtletra.Text);
            }
            catch
            {
                MessageBox.Show("Informe um caractere válido");
                return;
            }
            int pletra = 0;
            String txt = "";
            for (int i = 0; i < palavra.Length; i++)
            {
                if (palavra[i] == letra)
                {
                    encontrou = true;
                    pletra = i;
                    txt = txt + txtletra.Text;


                }
                else
                {
                    txt = txt + tela[i];
                }
            }
            if(encontrou == false)
            {
                tentativas--;
            }
            if(txtPalavra.Text.IndexOf('#') == -1) // Não consegui deixar com o valor 0...
            {
                pnJogo.Visible = false;
                btmStart.Visible = true;
                picBoxWin.Visible = true;
                btmSair.Visible = true;
            }
            if(tentativas == 0)
            {
                pnJogo.Visible = false;
                btmStart.Visible = true;
                picBoxLose.Visible = true;
                btmSair.Visible = true;
            }
            tela = txt;
            txtPalavra.Text = tela;
            txtletra.Clear();
            lblTrestantes.Text = tentativas.ToString();
            //if(tentativas <= 0)
            //{
            //    pnJogo.Visible = false;
             //   btmStart.Visible = true;
           // }
        }

        private void btmSair_Click(object sender, EventArgs e)
        {
           Application.Exit();
        }
    }
}

/*Tentei realizar com Classe porém deu muitos erros, fiquei com muitas duvidas e tive que procurar em bastantes locais e videos
 * consegui realizar utilizando List!!! :D
 * 
 */
