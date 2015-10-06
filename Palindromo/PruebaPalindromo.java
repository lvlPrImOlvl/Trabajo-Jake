/**
  * @author PrImO
  * @version 1.006/10/2015
  */
//Se necesita importar para que funcione JOptionPane
import javax.swing.*;

/**Clase que contiene el programa principal, donde se manda a llamar a todos*/
public class PruebaPalindromo
{
/** Metodo main, en el cual se manda a llamar a las clases y metodos
  * @param args[] Parametros para main
  */
	public static void main (String args[])
	{
		String palabra;
		Boolean ok;
		palabra = JOptionPane.showInputDialog(null, "Ingtresa la palabra");
		Palindromo palindromo = new Palindromo(palabra);
		ok = palindromo.verificarPalindromo();

		if (ok == true)
            JOptionPane.showMessageDialog(null,"La palabra:" + palabra + " es Palindromo");
        else
            JOptionPane.showMessageDialog(null,"La palabra:" + palabra + " no es Palindromo");   
	}	
}
