//Necesario para utiliza JOptionPane
import javax.swing.*;

/**
  * Clase Palindromo define si una palabra es o no un palindromo 
  */
public class Palindromo
{
    private String palabra;
    private Boolean ok;
/**
  * Constructor Palindromo, asigna a la variable la palabra para trabajarla
  * @param palabra Palabra a asignar para su uso posterior
  */
    Palindromo(String palabra)
    {
        this.palabra = palabra;
    }

/**
  * Metodo verificarPalindromo, verifica si una palabra es o no un palindromo
  * @return ok Variable que nos dice si una palabra fue o no un palindromo
  */
    public boolean verificarPalindromo()
    {
        for (int i = 0 ; i < palabra.length() ; i++)
        {
            if (palabra.charAt(i) == palabra.charAt(palabra.length() -1- i))
            ok=true;
            else
            ok=false;
        }
        return ok;
    }
}